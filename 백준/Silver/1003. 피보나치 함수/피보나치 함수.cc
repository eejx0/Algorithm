#include <stdio.h>

int zero_count[41] = {1, 0}; 
int one_count[41] = {0, 1};  

void precompute_fibonacci() {
    for (int i = 2; i <= 40; i++) {
        zero_count[i] = zero_count[i - 1] + zero_count[i - 2];
        one_count[i] = one_count[i - 1] + one_count[i - 2];
    }
}

int main() {
    int T, N;
    
    precompute_fibonacci();
    
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &N);
        
        printf("%d %d\n", zero_count[N], one_count[N]);
    }
    
    return 0;
}
