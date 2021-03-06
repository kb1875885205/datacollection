/*************************************************************************
    > File Name: jam12.cpp
    > Author: Guo Hengkai
    > Created Time: 2015/4/18 9:05:41
 ************************************************************************/

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

const string PROG = "B-small-attempt1";
FILE *fin, *fout;

int T;
int N;
int B;
int M[1000];
int min_time;
int ans;

long long GetNumber(long long x)
{
    long long result = 0;
    int c = 0;
    if (x > 0)
    {
        for (int i = 0; i < B; ++i)
        {
            result += (x * min_time - 1) / M[i] + 1;
            if (x * min_time % M[i] == 0)
            {
                ++c;
            }
        }
    }
    else
    {
        c = B;
    }
    if (result < N && result + c >= N)
    {
        int d = N - result;
        for (int i = 0; i < B; ++i)
        {
            if (x * min_time % M[i] == 0)
            {
                --d;
                if (d == 0)
                {
                    ans = i;
                    break;
                }
            }
        }
    }
    // cout << result << " " << N << endl;
    return result;
}

int main()
{
    fin = fopen((PROG + ".in").c_str(), "r");
    fout = fopen((PROG + ".out").c_str(), "w");

    fscanf(fin, "%d", &T);
    for (int t = 1; t <= T; ++t)
    {
        fscanf(fin, "%d %d", &B, &N);
        min_time = 1000001;
        long long right = 1;
        for (int i = 0; i < B; ++i)
        {
            fscanf(fin, "%d", M + i);
            min_time = min(min_time, M[i]);
            right *= M[i];
        }
        min_time = 1;
        long long temp = 0;
        for (int i = 0; i < B; ++i)
        {
            temp += right / M[i];
        }
        N = (N - 1) % temp  +1;

        long long left = 0;
        long long mid;
        ans = -1;
        while (ans < 0)
        {
            mid = (left + right + 1) / 2;
            if (GetNumber(mid) < N)
            {
                left = mid;
            }
            else
            {
                right = mid - 1;
            }
            // cout << left << " " << mid << " " << right << endl;
            // cout << t << endl;
            if (left >= right) break;
        }
        GetNumber(left);

        fprintf(fout, "Case #%d: %d\n", t, ans + 1);

    }
    return 0;
}
