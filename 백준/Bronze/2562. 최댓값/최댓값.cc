#include <iostream>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<int> v(9);

    for(int i=0; i<9; i++) {
        std::cin >> v[i];

    }

    int max_val = v[0];
    int max_idx = 0;

    for (int i=1; i<9; i++){
        if (v[i] > max_val) {
            max_val = v[i];
            max_idx = i;}
    }


    std::cout << max_val << '\n';
    std::cout << max_idx+1<< std::endl;
    return 0;
}