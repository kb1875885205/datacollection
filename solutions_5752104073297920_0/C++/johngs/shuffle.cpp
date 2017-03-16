//Google Code Jam
//Round 1A
//26 Apr 2014

//start of jonathanirvings' template v2.0.0 (BETA)

#define jonathan using
#define ganteng namespace
#define banget std
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <map>
#include <set>
#include <time.h>
#include <bitset>
#include <list>
jonathan ganteng banget;

typedef long long LL;
typedef pair<int,int> pii;
typedef pair<pii,pii> ppi;
typedef pair<LL,LL> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
typedef vector<string> vstr;
typedef vector<char> vc;

double EPS = 1e-9;
int INF = 2000000000;
long long INFF = 8000000000000000000LL;
double PI = acos(-1);
int dirx[8] = {-1,0,0,1,-1,-1,1,1};
int diry[8] = {0,1,-1,0,-1,1,-1,1};

#ifdef TESTING
	#define DEBUG fprintf(stderr,"====TESTING====\n")
	#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
	#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
	#define DEBUG 
	#define VALUE(x)
	#define debug(...)
#endif

#define FOR(a,b,c) for (int (a)=(b);(a)<(c);++(a))
#define FORN(a,b,c) for (int (a)=(b);(a)<=(c);++(a))
#define FORD(a,b,c) for (int (a)=(b);(a)>=(c);--(a))
#define FORSQ(a,b,c) for (int (a)=(b);(a)*(a)<=(c);++(a))
#define FORL(a,b,c) for (LL (a)=(b);(a)<=(c);++(a))
#define FORLSQ(a,b,c) for (int (a)=(b);(LL)(a)*(LL)(a)<=(c);++(a))
#define FORC(a,b,c) for (char (a)=(b);(a)<=(c);++(a))
#define REP(i,n) FOR(i,0,n)
#define REPN(i,n) FORN(i,1,n)
#define REPD(i,n) FORD(i,n,1)
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define SQR(x) ((x) * (x))
#define RESET(a,b) memset(a,b,sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define ALLA(arr,sz) arr,arr+sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr,sz) sort(ALLA(arr,sz))
#define REVERSEA(arr,sz) reverse(ALLA(arr,sz))
#define PERMUTE next_permutation
#define TC(t) while(t--)
#define READ(n,data) {scanf("%d",&n); REPN(i,n) scanf("%d",&data[i]);}

inline string IntToString(int a){
    char x[100];
    sprintf(x,"%d",a); string s = x;
    return s;
}

inline int StringToInt(string a){
    char x[100]; int res;
    strcpy(x,a.c_str()); sscanf(x,"%d",&res);
    return res;
}

inline string GetString(void){
	char x[1000005];
	scanf("%s",x); string s = x;
	return s;
}

inline string uppercase(string s){
	int n = SIZE(s); 
	REP(i,n) if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
	return s;
}

inline string lowercase(string s){
	int n = SIZE(s); 
	REP(i,n) if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
	return s;
}

inline void OPEN (string s) {
    freopen ((s + ".in").c_str (), "r", stdin);
    freopen ((s + ".out").c_str (), "w", stdout);
}

//end of jonathanirvings' template v2.0.0 (BETA)

int T;
int n,data[1005],cek[1005];

inline int RandBetween(int a,int b)
{
	return (rand() % (b - a + 1) + a);
}

int shuffle1(void)
{
	REP(i,n) cek[i] = i;
	REP(i,n)
	{
		int x = RandBetween(i,n-1);
		swap(cek[i],cek[x]);
	}
	int res = 0;
	REP(i,n) if(cek[i] != data[i]) ++res;
	return res;
}

int shuffle2(void)
{
	REP(i,n) cek[i] = i;
	REP(i,n)
	{
		int x = RandBetween(0,n-1);
		swap(cek[i],cek[x]);
	}
	int res = 0;
	REP(i,n) if(cek[i] != data[i]) ++res;
	return res;
}

int main()
{
	int Good = 0, Bad = 0;
	srand(time(NULL));
	scanf("%d",&T);
	REPN(cases,T)
	{
		printf("Case #%d: ",cases);
		scanf("%d",&n);
		REP(i,n) scanf("%d",&data[i]);
		int risan1 = INF, risan2 = INF;
		vi ambil1,ambil2;
		risan1 = risan2 = 0;
		REP(coba,1000)
		{
			int x = shuffle1();
			int y = shuffle2();
			MIN(risan1,x);
			MIN(risan2,y);
			//risan1 += shuffle1();
			//risan2 += shuffle2();
			ambil1.pb(x);
			ambil2.pb(y);
		}
		SORT(ambil1);
		SORT(ambil2);
		REP(i,50)
		{
			risan1 += ambil1[i];
			risan2 += ambil2[i];
		}
		if (risan1 <= risan2) ++Good;
		else ++Bad;
		if (risan1 <= risan2) puts("GOOD");
		else puts("BAD");
	}
	debug("GOOD = %d BAD = %d\n",Good,Bad);
	return 0;
}












