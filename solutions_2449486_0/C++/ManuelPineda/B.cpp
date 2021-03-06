using namespace std;
#include<algorithm>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<set>

#include<climits>
#include<cstring>
#include<cstdio>
#include<cmath>

#define For(i,a) for(int i=0;i<a;++i)
#define foreach(x,v) for(typeof (v).begin() x = (v).begin(); x!= (v).end(); x++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define D(x) cout<< #x " = "<<(x)<<endl
#define Dbg if(1)
#define MAXNODES 1000

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }
template <class T> int toInt(const T &x)
{ stringstream s; s << x; int r; s >> r; return r; }

const double pi=acos(-1);
const double Pi2=acos(0);
typedef long long int lli;
typedef pair<int , int> pii;

int mat[200][200];

int main(){
    int tc;cin>>tc;
    For(id,tc){
      int h,w;cin>>h>>w;
      For(i,h)
        For(j,w)
          cin>>mat[i][j];
          
      int ans = 1;
      
      For(i,h){
        For(j,w){
          int act = mat[i][j];
          int r=1,c=1;
          For(k,h) r &= mat[k][j] <= act;
          For(k,w) c &= mat[i][k] <= act;
          ans &= r or c;
        }
        
      }
    
      cout<<"Case #"<<(id+1)<<": "<<((ans)?"YES":"NO")<<endl;
    }
    return 0;
}   
