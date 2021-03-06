//!
///

/**============= Approach =================**
@Author: A Asif Khan Chowdhury
@Category:
/**========================================**/


/**................ Headers ................**/
#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <list>
#include <queue>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <sstream>
#include <bitset>
#include <set>

using namespace std;

/**................ Macros ................**/
#define Set(N, j) (N|(1<<j))
#define reset(N, j) (N&~(1<<j))
#define Check(N, j) (bool)(N&(1<<j))
#define toggle(N, j) (N^(1<<j))
#define turnOff(N, j) (N & ~(1<<j))
#define CLEAR(A, x) ( memset(A,x,sizeof(A)) )
#define pi 3.141592653589793
#define pii pair <int, int>
#define pb push_back
#define pf printf
#define S(x) scanf("%d", &x)
#define SL(x) scanf("%ld", &x)
#define out(C) printf("Case #%d: ", C);
#define FOR(i, x, y) for(int i=x; i<=y; i++)
#define open freopen("E:/a.txt", "r", stdin);
#define write freopen("E:/b.txt","w", stdout);
#define MAX (1+(1<<5))
#define inf 0x7fffffff
#define ll long long
#define mod 100000007
#define mx 100010
int gcd(int a, int b) { return b?gcd(b,a%b):a; }


int main()
{
	cin.tie(NULL);
	open
    write
    int test;
    S(test);
    FOR(C, 1, test){
        vector<int>arr;
        int r1, r2;
        cin>>r1;
        for(int i=1; i<=4; i++){
            for(int j=1; j<=4; j++){
                int a;
                cin>>a;
                if(i==r1) arr.pb(a);
            }
        }
        cin>>r2;
        int cnt=0;
        int ans;

        for(int i=1; i<=4; i++){
            for(int j=1; j<=4; j++){
                int a;
                cin>>a;
                if(i==r2){
                    for(int k=0; k<4; k++){
                        if(arr[k]==a){
                            cnt++;
                            ans=a;
                            break;
                        }
                    }
                }
            }
        }

        out(C);
        if(cnt==0){
            cout<<"Volunteer cheated!"<<endl;
        }
        else if(cnt==1){
            cout<<ans<<endl;
        }
        else cout<<"Bad magician!"<<endl;
    }
    return 0;
}





