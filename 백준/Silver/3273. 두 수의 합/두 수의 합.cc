#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for(int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    int x;
    std::cin >> x;

    std::sort(arr.begin(), arr.end());

    int s=0;
    int e =n-1;
    int count = 0;

    while (s<e) {
        int sum = arr[s] + arr[e];
        if (sum == x) {
            count ++;
            e--;
        } else if (sum >x) {
            e--;
        } else {
            s++;
        }
        
    }

    std::cout << count <<'\n';

 

    return 0;
}