#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <tuple> // 튜풀
#include <set> // 자동정렬 + 중복 제거된 집합
#include <map> // key → value 형태의 자료구조
#include <string> // 문자열
#include <algorithm> //정렬, 최대최소(max_element)
#include <iomanip>  // 출력포맷조절(setprecision, fixed)
#include <functional> //비교 (greater<>)
#include <cctype> // 문자처리 (toupper, islower)
#include <queue> // 큐
#include <cstring> // 메모리처리 memset 

int N,M;

std::vector<int> graph[1001];
bool visited [1001];
int count = 0;

void recur(int node) {
    visited[node] = true;
    
    for (int nxt : graph[node]) {
        if ( !visited[nxt]){
            recur(nxt);
            
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> N >> M;

    for (int i=0; i<M; i++){
        int x,y;
        std::cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    for (int i=1; i<=N; i++) {
        if (!visited[i]){
            recur(i);
            count++;
        }
    }
    std::cout << count << '\n';


    
    return 0;
}