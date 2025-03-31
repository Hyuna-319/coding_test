#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    int answer = 0;

    for (int m=1; m<n; m++) {
        int sum = m;
        int temp = m;

        while (temp >0 ) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == n) {
            answer = m;
            break;
    }
    }

    std::cout << answer << '\n';


    
    return 0;

}