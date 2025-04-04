#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <map> // key → value 형태의 자료구조
#include <algorithm> //정렬, 최대최소(max_element)



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;
    
    std::map<int, int> points;

    for (int i=0; i<N; i++) {
        int x;
        std::cin >> x;
        points[x]++;
    }

    int v;
    std::cin >> v;

    std::cout << points[v] << '\n'; 




    return 0;
}