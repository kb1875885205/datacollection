﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace CodeJam
{
    class Program
    {
        static void Main(string[] args)
        {
            using (CodeJamIO io = new CodeJamIO("in.txt", "out.txt"))
            {
                Program p = new Program(io); ;
                p.Go();
            }
        }

        private CodeJamIO m_io = null;
        public Program(CodeJamIO io)
        {
            m_io = io;
        }

        private void Go()
        {
            var inputToOutput = CreateMapping();

            int T = m_io.ReadInt();
            for (int t = 0; t < T; t++)
            {
                string line = m_io.ReadLine();

                m_io.WriteCase(new String(line.Select(inChar => inputToOutput[inChar]).ToArray()));
            }
        }

        private static Dictionary<char,char> CreateMapping()
        {
            Dictionary<char, char> mapping = new Dictionary<char, char>();
            string[] sampleInput = new string[] { "y", "e", "q", "ejp mysljylc kd kxveddknmc re jsicpdrysi", "rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd", "de kr kd eoya kw aej tysr re ujdr lkgc jv" };
            string[] sampleOutput = new string[] { "a", "o", "z", "our language is impossible to understand", "there are twenty six factorial possibilities", "so it is okay if you want to just give up" };

            for (int i = 0; i < sampleInput.Length; i++)
            {
                for (int j = 0; j < sampleInput[i].Length; j++)
                {
                    char inChar = sampleInput[i][j];
                    char outChar = sampleOutput[i][j];

                    if (mapping.ContainsKey(inChar))
                    {
                        if (mapping[inChar] != outChar)
                        {
                            Console.WriteLine("Contradiction {0}->{1} not {2}", inChar, mapping[inChar], outChar);
                        }
                    }
                    else
                    {
                        mapping.Add(inChar, outChar);
                    }
                }
            }

            int missingCountInput = 0, missingCountOutput = 0;
            char lastMissingInput = '$', lastMissingOutput = '$';

            for (char x = 'a'; x <= 'z'; x++)
            {
                if (!mapping.ContainsKey(x))
                {
                    lastMissingInput = x;
                    Console.WriteLine("Missing input char {0}", x);
                    ++missingCountInput;
                }
            }

            var outputsFound = new HashSet<char>(mapping.Values);
            for (char x = 'a'; x <= 'z'; x++)
            {
                if (!outputsFound.Contains(x))
                {
                    lastMissingOutput = x;
                    Console.WriteLine("Missing output char {0}", x);
                    ++missingCountOutput;
                }
            }

            if (missingCountInput == 1 && missingCountOutput == 1)
            {
                mapping[lastMissingInput] = lastMissingOutput;
                Console.WriteLine("Mapped {0} -> {1} because they were the only ones left", lastMissingInput, lastMissingOutput);
            }

            return mapping;
        }
    }

    #region IO Class

    class CodeJamIO : IDisposable
    {
        private int m_case = 0;
        private string m_currentLine;
        private StreamReader m_reader;
        private StreamWriter m_writer;

        public CodeJamIO(string infile, string outfile)
        {
            m_reader = new StreamReader(infile);
            m_writer = new StreamWriter(outfile);
        }

        public void WriteCase(string result)
        {
            ++m_case;
            m_writer.WriteLine("Case #{0}: {1}", m_case, result);
        }
        public void WriteCase(long result)
        {
            WriteCase(result.ToString());
        }
        public void WriteCase(int result)
        {
            WriteCase(result.ToString());
        }

        public long ReadLong()
        {
            return long.Parse(ReadWord());
        }

        public int ReadInt()
        {
            return int.Parse(ReadWord());
        }

        public string ReadLine()
        {
            if (String.IsNullOrWhiteSpace(m_currentLine))
            {
                m_currentLine = m_reader.ReadLine();
                if (m_currentLine == null)
                    throw new Exception("end of file");
            }
            string ret = m_currentLine;
            m_currentLine = null;
            return ret;
        }

        private static char[] whitespace = new char[] { ' ', '\t', '\n', '\r' };

        public string ReadWord()
        {

            string ret;
            int i;
            for (i = 0; string.IsNullOrWhiteSpace(m_currentLine) && i < 1000; i++)
            {
                m_currentLine = m_reader.ReadLine();
            }
            if (i >= 1000)
                throw new Exception("Too many bad reads");
            m_currentLine = m_currentLine.TrimStart(whitespace);
            int positionOfNextSpace = m_currentLine.IndexOfAny(whitespace);
            if (positionOfNextSpace < 0)
            {
                ret = m_currentLine;
                m_currentLine = null;

            }
            else
            {
                ret = m_currentLine.Substring(0, positionOfNextSpace);
                m_currentLine = m_currentLine.Substring(positionOfNextSpace);
            }

            return ret;
        }

        private bool m_disposed = false;
        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        protected virtual void Dispose(bool disposing)
        {
            // Check to see if Dispose has already been called.
            if (!m_disposed)
            {
                // If disposing equals true, dispose all managed
                // and unmanaged resources.
                if (disposing)
                {
                    // Dispose managed resources.
                    m_writer.Flush();
                    m_writer.Close();
                    m_writer.Dispose();
                }

                m_disposed = true;
            }
        }
    }
    #endregion IO Class
}