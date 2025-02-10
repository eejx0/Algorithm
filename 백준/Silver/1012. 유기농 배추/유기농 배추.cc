#include <stdio.h>
#include <string.h>

#define MAX 50

int farm[MAX][MAX];
int visited[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int M, N, K;

void dfs(int x, int y) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            if (farm[ny][nx] && !visited[ny][nx]) {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d %d", &M, &N, &K);
        memset(farm, 0, sizeof(farm));
        memset(visited, 0, sizeof(visited));
        
        for (int i = 0; i < K; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            farm[y][x] = 1;
        }
        
        int count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (farm[i][j] && !visited[i][j]) {
                    dfs(j, i);
                    count++;
                }
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
