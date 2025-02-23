#include <stdio.h>

int get_last_digit(int a, int b) {
    int result = 1;
    a = a % 10;
    
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % 10;
        }
        a = (a * a) % 10;
        b /= 2;
    }
    
    return result == 0 ? 10 : result;
}

int main() {
    int T, a, b;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", get_last_digit(a, b));
    }

    return 0;
}
