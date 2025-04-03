#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)
#include <queue> // 큐

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

   
    int T;
    std::cin >> T;

    while(T--){
        int K;
        std::cin >> K ;

        std::priority_queue<long long, std::vector<long long>, std::greater<>> q;

        for (int i=0; i<K; i++){
            long long x;
            std::cin >> x ;
            q.push(x);
        }
        
        long long total = 0;

        while (q.size() >1) {
            long long first = q.top(); q.pop();
            long long second = q.top(); q.pop();

            long long sum = first + second;
            total += sum;
            q.push(sum);

        }

        std::cout << total << '\n';
    }




    return 0;
}