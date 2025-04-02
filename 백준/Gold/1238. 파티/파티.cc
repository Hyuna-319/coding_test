#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)
#include <queue> // 큐
#include <climits> // INT_MAX 무한대 값 

const int INF = INT_MAX;
int N, M, X;
std::vector<std::pair<int, int>> graph[10001];

std::vector<int> solution(int start) {
    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>,
                        std::greater<>> q;
    std::vector<int> distance(N+1, INF);
    
    q.push({0,start});
    distance[start] = 0;

    while (!q.empty()) {
        int dist = q.top().first;
        int now = q.top().second;
        q.pop();

        if (dist > distance[now]) continue;
        for(auto [nxt,cost] : graph[now]) {
            int new_dist = dist + cost;
            if (new_dist < distance[nxt]) {
                distance[nxt] = new_dist;
                q.push({new_dist,nxt});

            }
        }
    }
    return distance;

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> N >> M >> X;

    for(int i=0; i<M; i++){
        int x,y,z;
        std::cin >> x >> y >> z;
        graph[x].push_back({y,z});
    }

    std::vector<int> fromX = solution(X);
    int result = 0;

    for (int i=1; i<=N; i++) {
        std::vector<int> toX = solution(i);
        int round = toX[X] + fromX[i];
        result = std::max(result, round);
    }

    std::cout << result << '\n';



    return 0;
}