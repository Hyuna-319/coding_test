#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)
#include <queue> // 큐
#include <cmath> //절댓값


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N;
    std::cin >> N;
    
    struct compare {
        bool operator()(int a, int b){
            if (std::abs(a) == std::abs(b)) return a > b;
            return std::abs(a) > std::abs(b);
        }
    };
    std::priority_queue<int, std::vector<int>, compare> q;

    for (int i=0; i<N; i++){
        int x;
        std::cin >> x;

        if (x==0){
            if(q.empty()) { 
                std::cout << 0 << '\n';
            } else {
                std::cout << q.top() << '\n';
                q.pop();
            }
        }
        else {
            q.push(x);
        }
    }

    return 0;
}