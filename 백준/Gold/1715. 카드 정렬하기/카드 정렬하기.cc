#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)
#include <queue> // 큐




int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N;
    std::cin >> N;

    std::priority_queue<int, std::vector<int>, std::greater<>> q;

    for (int i=0; i<N; i++) {
        int x;
        std::cin >> x;
        q.push(x);
    }
    int total = 0;
    while(q.size() > 1) {
        int first = q.top(); q.pop();
        int second = q.top(); q.pop();

        int sum = first + second;
        total += sum;

        q.push(sum);

    }
    std::cout << total << '\n';

    return 0;
}