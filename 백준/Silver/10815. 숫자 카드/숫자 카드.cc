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

    std::set<int> mine;
    for (int i=0; i<n; i++){
        int num;
        std::cin >> num ;
        mine.insert(num);
    }

    int m;
    std::cin >> m;

    for (int i=0; i<m; i++){
        int num;
        std::cin >> num;

        if (mine.find(num) != mine.end()){
            std::cout << 1 << ' ';
        }
        else{
            std::cout << 0 << ' ';
        }
    }

    std::cout << '\n';

    return 0;


}