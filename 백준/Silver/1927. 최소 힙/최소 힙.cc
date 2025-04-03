#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)
#include <queue> // 큐


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    

    std::priority_queue<int, std::vector<int>,
                        std::greater<>> q;
    
    int N;                
    std::cin >> N;

    for (int i=0; i<N; i++) {

        int x ;
        std::cin >> x;

        if (x==0){
            if (q.empty()){
                std::cout << 0 << '\n';
            } else {
                std::cout << q.top() << '\n';
                q.pop();
            }
        } else {
            q.push(x);
        }

    }



    return 0;
}