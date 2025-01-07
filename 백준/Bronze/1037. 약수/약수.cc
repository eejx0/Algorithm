#include <stdio.h>

int main() {
    int n;
    int min = 1000001, max = 0;
    scanf("%d", &n);

    for (int i = 0; i<n; i++) {
        int a;
        scanf("%d", &a);
        if (a<min) {
            min = a;
        }
        if(a>max) {
            max = a;
        }
    }

    if (min == max) {
        printf("%d\n", min * min);
    } else {
        printf("%d\n", min * max);
    }
    return 0;
}