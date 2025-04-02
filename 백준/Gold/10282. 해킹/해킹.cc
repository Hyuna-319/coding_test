#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <iomanip>  // 출력포맷조절(setprecision, fixed)
#include <functional> //비교 (greater<>)
#include <queue> // 큐
#include <climits> // INT_MAX 무한대 값 

const int INF = INT_MAX;
int test,n,d,c;
int count = 0;
std::vector<std::pair<int,int>> graph[10001];

std::vector<int> solution(int start, int& infected_count, int& max_time) {
    std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>,
                        std::greater<>> q;
    std::vector<int> distance(n+1, INF);

    q.push({0,start});
    distance[start] = 0;

    while(!q.empty()) {
        int dist = q.top().first;
        int now = q.top().second;
        q.pop();

        if (dist > distance[now]) continue;
        for (auto [nxt,cost] : graph[now]) {
            int new_dist = dist + cost;
            if (new_dist < distance[nxt]) {
                distance[nxt] = new_dist;
                q.push({new_dist,nxt});

            }
        }

    }
    infected_count = 0;
    max_time = 0;
    for(int i=1; i<=n; i++) {
        if (distance[i] != INF) {
            infected_count ++;
            max_time = std::max(max_time,distance[i]);
        }
    
    }
    return distance;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    std::cin >> test;

    while(test--){
        std::cin >> n >> d >> c;

        for (int i=0; i<=n; i++) {
            graph[i].clear();
        }

        for (int i=0; i<d; i++) {
            int a,b,s;
            std::cin >> a >> b >> s;
            graph[b].push_back({a,s});
        }
        int count =0, max_time = 0;
        solution(c,count,max_time);
        std::cout << count << ' ' << max_time << '\n';
        
    }
    
    return 0;
}