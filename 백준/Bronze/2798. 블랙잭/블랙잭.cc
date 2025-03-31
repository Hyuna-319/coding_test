#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n,m;
    std::cin >> n >> m ;

    std::vector<int> cards(n);
    for (int i=0; i<n; i++) {
        std::cin >> cards[i];
    }

    int max_sum =0;

    for (int i=0; i<n-2; i++) {
        for (int j=i+1; j<n-1; j++) {
            for (int k=j+1; k<n; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= m and sum > max_sum) {
                    max_sum = sum;
                }
                }
            }
        }
    
    std::cout << max_sum << '\n';
    
    return 0;

}