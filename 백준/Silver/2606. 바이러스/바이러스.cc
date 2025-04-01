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

const int MAX = 101;

std::vector<int> graph[MAX];
bool visited [MAX];

int count = 0;

void recur(int node) {

    visited[node] = true;

    for (int nxt : graph[node]) {
        if (!visited[nxt]){
            recur(nxt);
            count ++;
        }
    }

}
int N,M;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> N;
    std::cin >> M;

    for (int i=0; i<M; i++) {
        int a,b;
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);

    }

    recur(1);
    std::cout << count << '\n';

    

    
    return 0;
}