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

    int x,y;
    std::cin >> x;
    std::cin >> y;

    if (x > 0 and y > 0) std::cout << '1';
    if (x>0 and y< 0) std::cout << '4';
    if (x<0 and y<0) std::cout << '3';
    if (x<0 and y>0) std::cout << '2';

    return 0;
}