#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    
    int count =0;
    int num = 666;

    while(true) {
        if (std::to_string(num).find("666") != -1){
            count ++;

            if (count == n) break;

        }
        num ++;


    }
    std::cout << num << '\n';

    return 0;
}