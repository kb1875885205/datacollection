#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <queue>
#include <stdio.h>

#include <math.h>

using namespace std;

ofstream fout("OUT111.txt");
ifstream fin ("INP111.in");

//FILE* pFile;
//int c;
//pFile = fopen("ou.txt","w");
//pFile=fopen ("beads.txt","r");

long long gcd( long long a, long long b)
{
   return (!b) ? a: gcd(b,a%b);
}


int main() {

//FILE* pFile;
//pFile = fopen("ou.txt","w");

// string na;
// if (tt == 0)
//  getline(fin,na);

// getline(fin,na);

// istringstream sin(na); 
// string v; 
// while (sin>>v) 
//   names.push_back(v); 

//fprintf(pFile, "Case #%d: ", t+1);
//fprintf(pFile,"%d\n",res);

  long long po = 1;
  vector <long long> pos;
 
  for (int i=0; i<40; i++)
  {
     pos.push_back(po); 
	 po *= 2;
  }
  pos.push_back(po);


  int TT;
  fin >> TT;

  for (int tt=0; tt<TT; tt++)
  {
    string s;
	fin >> s;
	string p = s.substr(0, s.find('/'));
	string q = s.substr(s.find('/')+1);


    long long pp=0;
	for (int i=0; i < p.size(); i++)
	{
      pp = 10*pp + (p[i] - '0');
	}

    long long qq=0;
	for (int i=0; i < q.size(); i++)
	{
      qq = 10*qq + (q[i] - '0');
	}

    long long a, b;

	long long t1 = gcd(pp, qq);
	long long den = qq/t1;
	long long num = pp/t1;

	if (den!= 1 && (po%den !=0))
       fout << "Case #" << tt+1 << ": " << "impossible" << endl;
	else
	{
       long long numA = po/den;
	   numA *= num;

	   bool done = false;
	   for (int i=0; i<=40 && !done; i++)
	   {
          if (numA >= pos[40-i])
		  {
             done = true;
             fout << "Case #" << tt+1 << ": " << i << endl;
		  }
	   }
	}
    

	 //fout.precision(14);
	 //fout << "Case #" << tt+1 << ": " << dis << endl;
	
  }

   return 0;
}

