#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <climits> // INT_MAX 무한대 값 



int INF = INT_MAX;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N,S;
    std::cin >> N >> S;

    std::vector<int> arr(N);

    for(int i=0; i<N; i++){
        std::cin >> arr[i];
    }

    int min = INF;
    int s = 0;
    int e = 0;
    int sum =0;

    std::vector<int> answer[N];

    while(true){
        if (sum >= S){
            min = std::min(min, e-s);
            sum += -arr[s++];
        }
        else if (e == N ){
            break;
        }
        else {
            sum += arr[e++];
        }

    }

    if (min == INF) {
        std::cout << 0 << '\n';
    } else{
        std::cout << min <<'\n';
    }
    

    return 0;
}