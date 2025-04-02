#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)
#include <queue> // 큐
#include <climits> // INT_MAX 무한대 값 

const int INF = INT_MAX;
int N, E;
std::vector<std::pair<int, int>> graph[1001];

std::vector<int> solution(int start) {
    std::vector<int> distance(N+1, INF);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int,int>>, 
                        std::greater<>> q;

    q.push({0,start});
    distance[start] = 0;

    while (!q.empty()) {
        int dist = q.top().first;
        int now = q.top().second;
        q.pop();

        if (dist > distance[now]) continue;

        for (auto [nxt, cost] : graph[now]) {
            int new_dist = dist + cost;
            if (new_dist < distance[nxt]) {
                distance[nxt] = new_dist;
                q.push({new_dist, nxt}); 
            }
        }

    }
    return distance;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> N >> E;

    for (int i=0; i<E; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }

    int v1,v2;
    std::cin >> v1 >> v2;

    std::vector<int> from1 = solution(1);
    std::vector<int> fromv1 = solution(v1);
    std::vector<int> fromv2 = solution(v2);
    
    long long route1 = 1LL *from1[v1] + fromv1[v2] + fromv2[N];
    long long route2 = 1LL *from1[v2] + fromv2[v1] + fromv1[N];
    long long answer = std::min(route1, route2);

    if (answer >= INF) std::cout << -1 << '\n';
    else if (answer < 0) std::cout << -1 << '\n';
    else std::cout << answer << '\n';
  

    return 0;
}