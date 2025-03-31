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
    
    int n;
    std::string room;

    std::cin >> room;

    

    std::vector<int> count(10, 0);

    for (int i=0; i<room.length(); i++){
        int n = room[i] -'0';
        count[n]++;
    }

    int six_nine = count[6] + count[9];
    count[6] = (six_nine+1) / 2;
    count[9] = 0;

    int result = *std::max_element(count.begin(), count.end());
    std::cout << result << '\n';

 
    


    return 0;
}