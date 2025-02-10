#include <stdio.h>

long long comb(int n, int r) {
    if (r == 0 || n == r) return 1;
    if (r == 1) return n;
    
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%lld\n", comb(M, N));
    }
    
    return 0;
}
