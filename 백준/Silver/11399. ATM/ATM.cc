#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::vector<int> time;

    for (int i=0; i<N; i++){
        int x;
        std::cin >> x;
        time.push_back(x);
    }

    std::sort(time.begin(), time.end());

    int sum = 0;
    int total = 0;

    for (int i=0; i<N; i++){
        sum += time[i];
        total += sum;
    }

    std::cout << total << '\n';



    return 0;
}