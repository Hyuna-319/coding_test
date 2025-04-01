#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>
#include <cctype>
#include <queue>

const int MAX = 1001;

std::vector<int> graph[MAX];
bool visited_dfs[MAX];
bool visited_bfs[MAX];

int N, M, V;

void dfs(int node) {
    visited_dfs[node] = true;
    std::cout << node << ' ';

    for (int nxt : graph[node]){
        if (!visited_dfs[nxt]){
            dfs(nxt);
        }
    }
}

void bfs(int start) {
    std::queue<int> q;
    q.push(start);
    visited_bfs[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        std::cout << node << ' ';

        for (int nxt : graph[node]){
            if (!visited_bfs[nxt]) {
                visited_bfs[nxt] = true;
                q.push(nxt);
            }
        }
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> N >>M >> V;

    for (int i=0; i<M; i++) {
        int a,b;
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i=1; i<=N; i++) {
        std::sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    std::cout << '\n';
    bfs(V);
    std::cout << '\n';

    return 0;
}