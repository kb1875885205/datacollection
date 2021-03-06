#include <bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < (int)(n); ++i)
#define for1(i, n) for(int i = 1; i <= (int)(n); ++i)
#define fore(i, a, b) for(int i = (int)(a); i <= (int)(b); ++i)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; --i)
#define ford1(i, n) for(int i = (int)(n); i>=1; --i)
#define fored(i, a, b) for(int i = (int)(b); i >= (int)(a); --i)
#define sz(v) ((int)((v).size()))
#define all(v) (v).begin(), (v).end()
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vpi;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long i64;
typedef unsigned long long u64;
typedef long double ld;
typedef vector<ld> vld;

template<class T> T sqr(const T& a) { return a * a; }
template<class T> bool uax(T&a, const T& b) { if( a < b ) { a = b; return true; } return false; }
template<class T> bool uin(T&a, const T& b) { if( a > b ) { a = b; return true; } return false; }

#ifdef HOME
#define dbg(v) do {cerr << v << '\n';}while(0)
#else
#define dbg(v) do {;}while(0)
#endif

const int inf = 1e9 + 100500;
const int MAXN = 10 * 1000 * 1000;

int ans[MAXN];

int reverse(int n) {
  int r = 0;
  while (n) {
    r = 10 * r + (n % 10);
    n /= 10;
  }
  return r;
}

void init() {
  forn(i, MAXN) ans[i] = inf;
  ans[1] = 1;
  queue<int> Q;
  Q.push(1);
  while (!Q.empty()) {
    int v = Q.front();
    Q.pop();
    if (v + 1 < MAXN && uin(ans[v+1], ans[v]+1))
      Q.push(v+1);
    int u = reverse(v);
    if (u < MAXN && uin(ans[u], ans[v] + 1))
      Q.push(u);
  }
}

void solve() {
  if (!ans[1]) init();
  int n;
  cin >> n;
  cout << ans[n] << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed; cout.precision(15);
  cerr << fixed; cerr.precision(15);
#ifdef HOME
  //freopen("input.txt", "r", stdin);
#endif
  int T;
  cin >> T;
  fore(t, 1, T) {
    cout << "Case #" << t << ": ";
    solve();
  }
  return 0;
}

