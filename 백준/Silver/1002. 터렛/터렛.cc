#include <stdio.h>
#include <math.h>

int find_positions(int x1, int y1, int r1, int x2, int y2, int r2) {
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    
    if (d == 0 && r1 == r2) return -1; 
    if (d > r1 + r2 || d < fabs(r1 - r2)) return 0; 
    if (d == r1 + r2 || d == fabs(r1 - r2)) return 1; 
    return 2;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        printf("%d\n", find_positions(x1, y1, r1, x2, y2, r2));
    }
    
    return 0;
}
