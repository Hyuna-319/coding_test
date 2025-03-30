#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <string>
#include <algorithm>
#include <functional>


int main() {
    int n,m;
    std::cin >> n >> m;

    std::set<std::string> no_hear;
    std::set<std::string> results;

    

    for (int i=0; i<n; i++){
        std::string name;
        std::cin >> name;
        no_hear.insert(name);
    }

    for (int i=0; i<m; i++){
        std::string name;
        std::cin>>name;
        if (no_hear.find(name) != no_hear.end()) {
            results.insert(name);
        }
    }

    std::vector<std::string> answer(results.begin(), results.end());
    std::sort(answer.begin(), answer.end());
    
    std::cout << answer.size() << '\n';
    for (int i=0; i<answer.size(); i++){
         int len = answer.size();
        std::cout << answer[i] << '\n';
    }

    return 0;

}