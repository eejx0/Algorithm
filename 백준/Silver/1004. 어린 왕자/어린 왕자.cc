#include <stdio.h>
#include <math.h>

typedef struct {
    int cx, cy, r;
} Planet;

int is_inside(int x, int y, Planet p) {
    int dist_sq = (x - p.cx) * (x - p.cx) + (y - p.cy) * (y - p.cy);
    return dist_sq < p.r * p.r;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int x1, y1, x2, y2, n;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &n);

        Planet planets[n];
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &planets[i].cx, &planets[i].cy, &planets[i].r);
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            int start_inside = is_inside(x1, y1, planets[i]);
            int end_inside = is_inside(x2, y2, planets[i]);

            if (start_inside != end_inside) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
