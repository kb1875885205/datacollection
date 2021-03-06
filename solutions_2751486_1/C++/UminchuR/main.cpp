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
#include <queue>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <stdio.h>
#include <complex>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, PII> TIII;
typedef long long LL;
typedef vector<LL> VLL;

//container util

//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define MT(a,b,c) MP(a, MP(b, c))
#define T1 first
#define T2 second.first
#define T3 second.second

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int t[1111111];
char str[1111111];
void main2(){
	memset(t, -1, sizeof(t));
	string vowel="aiueo";
	int k;
	cin>>str;
	cin>>k;
	VI v,nv;
	int n=strlen(str);
	int cnt = 0;
	REP(i,n){
		if(-1==vowel.find(str[i])){
			cnt++;
			if(cnt>=k){
				for(int idx=i-k+1; t[idx]==-1&&idx>=0; idx--){
					t[idx]=i;
				}
			}
		}else cnt=0;
	}
	LL ret = 0;
	REP(i,n)if(t[i]!=-1)ret += n-t[i];
	cout << ret << endl;
}


int main(){
	freopen("in.txt", "r",stdin);
	freopen("out.txt", "w",stdout);
	int T;
	cin >> T;
	REP(t,T){
		printf("Case #%d: ", t+1);
		main2();
	}
	return 0;
}