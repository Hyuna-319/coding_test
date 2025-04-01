#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip> 
#include <functional>
#include <cctype>
#include <queue>
#include <cstring> //memset

int T,M,N,K;
int field[50][50];
bool visited[50][50];

int dy[4] = {-1,1,0,0};
int dx[4] = {0,0,-1,1};

void bfs(int y, int x) {
    std::queue<std::pair<int, int>> q;
    q.push({y,x});
    visited[y][x] = true;

    while(!q.empty()) {
        int ey = q.front().first;
        int ex = q.front().second;
        q.pop();

        for (int dir=0; dir<4; dir++){
            int ny = ey + dy[dir];
            int nx = ex + dx[dir];

            if (ny >=0 && ny < N and nx >=0 && nx < M){
                if (field[ny][nx] == 1 && !visited[ny][nx]) {
                    visited[ny][nx] = true;
                    q.push({ny,nx});
                }
            }
        }
    }
} 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> T;
    while (T--) {
        std::cin >> M >> N >> K;

        memset(field, 0,sizeof(field));
        memset(visited, false, sizeof(visited));


        for (int i=0; i<K; i++){
            int x,y;
            std::cin >> x >> y;
            field[y][x] = 1;
        }

        int count = 0;
        for (int i=0; i < N; i++){
            for (int j=0; j <M; j++){
                if(field[i][j] == 1 && !visited[i][j]) {
                    bfs(i,j);
                    count++;
                }
            }
        }
    std::cout << count << '\n';

    }

    return 0;
}