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

    while (n--){
        int r;
        std::cin >> r;

        std::string s;
        std::cin >> s;
    
        std::string new_word;
        for (int i=0; i<s.length(); i++){
            for (int j=0; j<r; j++){
                new_word += s[i];
            }

        }
        std::cout << new_word << '\n';
    }

 
    

    return 0;
}