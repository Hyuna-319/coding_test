#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <functional> //비교 (greater<>)
#include <queue> // 큐
#include <climits> // INT_MAX 무한대 값 


int INF = INT_MAX;
int N,M;
std::vector<std::pair<int,int>> graph[50001];
std::vector<int> distance;

void solution(int start){
    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>,
                        std::greater<>> q;
    

    q.push({0,start});
    distance[start] = 0;
    
    while (!q.empty()) {
        int dist = q.top().first;
        int now = q.top().second;
        q.pop();

        if(dist > distance[now]) continue;

        for(auto [nxt, cost]: graph[now]) {
            int new_dist = dist + cost;
            if (new_dist < distance[nxt]) {
                distance[nxt] = new_dist;
                q.push({new_dist,nxt});
            } 
        }
    }

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    std::cin >> N >> M;
    distance = std::vector<int>(N+1, INF);

    for(int i=0; i<M; i++){
        int a,b,c;
        std::cin >> a >> b >> c ;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }

    solution(1);
    std::cout << distance[N] << '\n';
   

    return 0;
}