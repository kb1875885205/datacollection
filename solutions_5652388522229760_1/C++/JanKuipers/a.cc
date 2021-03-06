#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
 
using namespace std;
 
#define PB push_back
#define SZ size()
#define ALL(x) x.begin(),x.end()
#define SORT(x) sort(ALL(x))
#define UNIQUE(x) x.erase(unique(ALL(x)),x.end())
#define REP(x, hi) for (int x=0; x<(hi); x++)
#define REPD(x, hi) for (int x=((hi)-1); x>=0; x--)
#define FOR(x, lo, hi) for (int x=(lo); x<(hi); x++)
#define FORD(x, lo, hi) for (int x=((hi)-1); x>=(lo); x--)

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<VVI> VVVI;
typedef long long LL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef vector<double> VD;
typedef vector<VD> VVD;
typedef vector<string> VS;

const int inf = 999999999;

////////////////////////////////////////////////////////////

void solve () {
  int n;
  cin >> n;
  if (n == 0) {
    cout << "INSOMNIA";
    return;
  }
  vector<bool> seen(10, false);
  int num_seen = 0;
  int nn = 0;
  while (num_seen < 10) {
    nn += n;
    int x = nn;
    while (x > 0) {
      int d = x % 10;
      if (!seen[d]) {
	seen[d] = true;
	num_seen++;
      }
      x /= 10;
    }
  }
  cout << nn;
}

int main () {

  int runs;
  cin >> runs;

  for (int run=1; run<=runs; run++) {
    cout << "Case #" << run << ": ";
    solve();
    cout << endl;
  }

  return 0;
}
