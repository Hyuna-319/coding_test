#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>
#include <cctype>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string s;
    std::cin >> s;

    std::vector<int> count(26, 0);

    for (int i=0; i<s.length(); i++){
        char upper = std::toupper(s[i]);
        count[upper -'A']++;
    }

    int maxi = 0;
    char result = '?';
    bool visited = false;

    for (int i=0; i< 26; i++){
        if (count[i] > maxi){
            maxi = count[i];
            result = 'A' + i;
            visited=false;
        }
        else if (maxi == count[i]){

         visited = true;
        }
    }

    if (visited) std::cout << "?\n";
    else std::cout << result << '\n';
   


    return 0;
}