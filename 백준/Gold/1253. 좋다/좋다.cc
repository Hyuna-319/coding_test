#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <iomanip>  // 출력포맷조절(setprecision, fixed)




int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin>> N;

    std::vector<int> arr(N);
    for (int i=0; i<N; i++){
        std::cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());
    
    int s =0;
    int e =0;
    int sum=0;
    int count = 0;

    for (int i=0; i<N; i++){
        int target =arr[i];
        int s=0;
        int e=N-1;

        while (s<e){
            if (s==i) {s++; continue;}
            if (e==i) {e--; continue;}

            int sum = arr[s] + arr[e];
            if (sum == target) {
                count ++;
                break;
            } else if (sum < target){
                s++;
            } else e--;
        }
    }

    
    std::cout << count << '\n';


    return 0;
}