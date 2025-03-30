#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
#include <functional>


int main() {
    int n;
    std::cin >> n;

    std::vector<std::tuple<int, int, std::string>> members;

    for (int i =0; i <n; i++){
        int age;
        std::string name;
        std::cin >> age >> name;

        members.push_back(std::make_tuple(age, i, name));
    }

    std::sort(members.begin(), members.end());

    for (int i=0; i<n; i++){
        std::cout << std::get<0>(members[i]) <<' ' << std::get<2>(members[i]) << '\n';
    }

    return 0;

}