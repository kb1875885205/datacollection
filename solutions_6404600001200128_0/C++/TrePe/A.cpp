#include <stdio.h>

int cases, kejs;
int i, j, k, n, f1, f2, q;
int a[100004];

int main() {
    scanf("%d", &cases);
    for (kejs = 1; kejs <= cases; kejs++) {
        printf("Case #%d: ", kejs);
        scanf("%d", &n);
        f1 = f2 = q = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", a+i);
            if (i > 0 && a[i-1] > a[i]) f1 += a[i-1] - a[i];
            if (i > 0 && a[i-1] >= a[i]) {
                if (f2 < a[i-1] - a[i]) f2 = a[i-1] - a[i];
            }
        }
        for (i = 0; i < n - 1; i++) {
            if (a[i] < f2) q += a[i];
            else q += f2;
        }
        f2 = q;
        printf("%d %d\n", f1, f2);
    }
    return 0;
}
