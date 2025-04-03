#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)




int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::vector<std::pair<int,int>> meeting(N);

    for (int i=0; i<N; i++){
        int start, end;
        std::cin >> start >> end;
        meeting[i] = {end, start};
    }

    std::sort(meeting.begin(), meeting.end());
    
    int last_end = 0;
    int count = 0;
    for (auto [end, start] : meeting){
        if (start >= last_end) {
            count ++;
            last_end = end;
            
        }
    }

    std::cout << count << '\n';




    return 0;
}