#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>
#include <queue>

int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int Y,X;
    std::cin >> Y >> X;

    std::vector<std::vector<int>> graph(Y, std::vector<int>(X));
    std::vector<std::vector<int>> visited(Y, std::vector<int>(X, 0));

    for (int i=0; i<Y; i++){
        std::string row;
        std::cin >> row;
        for (int j=0;  j<X; j++){
            graph[i][j] = row[j] - '0';
        }
    }

    std::queue<std::pair<int, int>> q;
    q.push({0,0});
    visited[0][0] =1;

    while (!q.empty()) {
        int ey = q.front().first;
        int ex = q.front().second;
        q.pop();

        for (int dir=0; dir<4; dir++){
            int ny = ey + dy[dir];
            int nx = ex + dx[dir];

            if (ny >=0 and ny <Y and nx>=0 and nx <X ) {
                if (graph[ny][nx] == 1 and visited[ny][nx] == 0){
                    visited[ny][nx] = visited[ey][ex] + 1;
                    q.push({ny,nx});
                }
            }
        }
    }

    std::cout << visited[Y-1][X-1] << '\n';


    



    return 0;
}