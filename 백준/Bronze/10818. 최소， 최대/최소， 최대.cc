#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i=0; i <n; i++){
        std::cin >> v[i];
    }

    int min_val = v[0];
    int max_val = v[0];

    for (int i=1; i <n; i++){
        if (v[i]< min_val) min_val = v[i];
        if (v[i]> max_val) max_val = v[i];
    }
    
    std::cout << min_val << " " << max_val << std::endl;
    return 0;
}