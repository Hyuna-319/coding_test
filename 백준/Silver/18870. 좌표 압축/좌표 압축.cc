#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <functional>


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::vector<int> origin(n);
    std::set<int> unique_numbers;

    for (int i=0; i<n; i++){
        std::cin >> origin[i];
        unique_numbers.insert(origin[i]);
    }

    std::vector<int> new_numbers(unique_numbers.begin(), unique_numbers.end());

    std::map<int, int> compressd;
    for (int i=0; i<new_numbers.size(); i++) {
        compressd[new_numbers[i]] = i;
    }
    
    for (int i=0; i<n; i++){
        std::cout << compressd[origin[i]] << ' ';
    }
    std::cout << '\n';
    



    return 0;

}