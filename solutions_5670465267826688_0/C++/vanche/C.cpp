#include <cstdio>
#include <algorithm>
using namespace std;
int tc, tcn,l,x,d[50005],t,ch;
char s[10001];
int m[4][4] = 
{
	{ 1, 'i', 'j', 'k' },
	{ 'i', -1, 'k', -'j' },
	{ 'j', -'k', -1, 'i' },
	{ 'k', 'j', -'i', -1 }
};

void input(){
	scanf("%d %d %s", &l, &x, s);
}

int c2i(int c){
	c = abs(c);
	if (c == 1)
		return 0;
	else
		return c - 'i' + 1;
	
}

void solve(){
	scanf("%d", &tc);
	while (tc--){
		input();
		t = min(5, x);
		ch = 0;

		for (int i = 0; i < l*t; i++){
			if (!i)
				d[i] = s[i];
			else{
				d[i] = m[c2i(d[i - 1])][c2i(s[i%l])];
				if (d[i - 1] < 0)
					d[i] *= -1;
			}
			if (!ch && d[i] == 'i')
				ch++;
			else if (ch == 1 && d[i] == 'k')
				ch++;

		}

		printf("Case #%d: ", ++tcn);
		if (ch == 2 && ((d[l - 1] == -1 && (x-1) % 2 == 0) || (abs(d[l - 1]) != 1 && (x-1) % 4 == 1)))
			puts("YES");
		else
			puts("NO");
	}
}

int main(void){
	//freopen("C-small-attempt0.in", "r", stdin);
//	freopen("output.txt", "w", stdout);
	solve();
	return 0;
}