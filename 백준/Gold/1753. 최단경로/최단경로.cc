#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <functional> //비교 (greater<>)
#include <queue> // 큐
#include <climits>

const int INF = INT_MAX;
int V, E, K;
std::vector<std::pair<int, int>> graph[20001];
int distance[20001];

int count = 0;

void dijkstra(int start) {
    std::priority_queue<std::pair<int, int>, 
                        std::vector<std::pair<int, int>>, 
                        std::greater<>> pq;
    
    pq.push({0, start}); // 거리, 비용
    distance[start] = 0;

    while (!pq.empty()) {
        int dist = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (dist > distance[now]) continue;

        for (auto [nxt, cost] : graph[now]) {
            int new_dist = dist + cost;
            if (new_dist < distance[nxt]) {
                distance[nxt] = new_dist;
                pq.push({new_dist, nxt});
            }
        }
    }

}



int N,M;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> V >> E >> K;

    for (int i=1; i<=V; i++){
        distance[i] = INF;
    }

    for (int i=0; i<E; i++){
        int u,v,w;
        std::cin >> u >> v >> w;
        graph[u].push_back({v,w});
    }

    dijkstra(K);

    for (int i=1; i <=V; i++) {
        if (distance[i] == INF) std::cout << "INF\n";
        else 
            std::cout << distance[i] << '\n';
        }
    
    
    return 0;
}