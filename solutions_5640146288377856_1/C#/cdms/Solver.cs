﻿using System;
using System.Collections.Generic;
using System.Dynamic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace CodeJam
{

    class Solver
    {
        string solveCase(int[] input)
        {
            int r = input[0];
            int c = input[1];
            int w = input[2];
            int perRow = c / w;
            int res = perRow * r;

            int leftPossibilities = Math.Min(w, c - (perRow-1) * w-1);
            int left2find = w - 1;
            int maxFails = leftPossibilities > left2find?1:0;

            return res + left2find + maxFails + "";
        }


        public string Solve(string input)
        {
            string[] lines = input.Trim().Split('\n').Select(l => l.TrimEnd('\r')).ToArray();

            int nbCases = Convert.ToInt32(lines[0]);
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < nbCases; i++)
            {
                //Console.WriteLine("Case: " + i);
                int caseLine = i + 1;
                string[] lineParts = lines[caseLine].Split(' ');
                int[] inputData = lineParts.Select(n => Convert.ToInt32(n)).ToArray();
                string result = solveCase(inputData);
                sb.AppendLine("Case #" + (i + 1) + ": " + result);
            }
            return sb.ToString();
        }
    }

}

