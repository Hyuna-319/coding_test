#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::vector<std::pair<int,int>> points(n);

    for (int i=0; i<n; i++){
        std::cin >> points[i].first >> points[i].second;
    }

    std::sort(points.begin(), points.end());

    for (int i=0; i<n; i++) {
        std::cout << points[i].first << ' ' << points[i].second << '\n';
    }



    return 0;
}