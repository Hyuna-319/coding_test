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

const int MAX = 100001;
int N, K;
bool visited[MAX];

int bfs(int start) {
    std::queue<std::pair<int, int>> q;
    q.push({start,0});
    visited[start] = true;

    while (!q.empty()) {
        int pos = q.front().first;
        int time = q.front().second;
        q.pop();

        if (pos == K) return time;

        int next_move[3] = {pos-1, pos+1, pos*2};

        for (int nxt : next_move){
            if (nxt>=0 && nxt < MAX && !visited[nxt]){
                visited[nxt] = true;
                q.push({nxt,time+1});
            }
        }
    }
    return -1;
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> N >> K;
    std::cout << bfs(N) << '\n';


    
    return 0;
}