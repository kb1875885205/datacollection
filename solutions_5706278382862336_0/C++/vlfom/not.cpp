#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <bitset>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <queue>
#include <memory.h>
#include <cmath>
using namespace std;
 
#define max(a,b) ((a)>(b)?(a):(b))
#define FOR0(i,n) for( i = 0 ; i < n ; ++i )
#define FOR1(i,n) for( i = 1 ; i <= n ; ++i )
#define sys_p system( "pause" )
#define pb push_back
#define mp make_pair
#define FI first
#define SE second
 
typedef long long LL ;
const LL INF = (LL)1e18 ;
const LL MOD = (LL)1e9 + 9 ;

map < pair < LL, LL >, LL > v ;

LL nod( LL x, LL y )
{
     while( x && y )
       x %= y, swap(x,y) ;
     return x+y ;   
}

LL check( LL p, LL q )
{
     LL c = 0, g, nd ;
     
     nd = nod( p,q ) ;
     p /= nd ; q /= nd ;
     
     if( v[ mp(p,q) ] )
       return -1 ;
     v[ mp(p,q) ] = 1 ;
     if( p == q || !p )
       return 0 ; 
     while( p < q )
        p *= 2, ++c ;
     p -= q ;
     g = check( p,q ) ;
     if( g == -1 )
       return -1 ;
     return c ;     
}

main()
{  
     LL T, t, p, q, i ; string s ;
     
     freopen( "input.txt", "r", stdin ) ;
     freopen( "output.txt", "w", stdout ) ;
     
     cin >> T ;
     for( t = 1 ; t <= T ; ++t )
     {
          cin >> s ;
          p = 0 ;
          for(i=0;i<(int)s.length()&&s[i]!='/';++i)
            p = p*10 + (s[i]-'0') ;
          ++i ;
          q = 0 ;
          while(i<(int)s.length())
            q = q*10 + (s[i]-'0'),
            ++i ;
          v.clear() ;
          LL g = check( p, q ) ;
          cout << "Case #" << t << ": " ;
          if( g != -1 )
            cout << g ;
          else
            cout << "impossible" ;
          cout << endl ;
     } 
} 
