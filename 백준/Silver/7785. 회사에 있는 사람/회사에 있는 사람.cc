#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <string>
#include <algorithm>
#include <functional>


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::set<std::string> office;

    for (int i=0; i<n; i++){
        std::string name, work;
        std::cin >> name >> work ;

        if (work == "enter") {
            office.insert(name);
        } else {
            office.erase(name);
        }
    }
    
    std::vector<std::string> answer(office.begin(), office.end());
    std::sort(answer.rbegin(), answer.rend());
    
    for (int i=0; i < answer.size(); i++){
        std::cout << answer[i] << '\n';
    }
      

    return 0;

}