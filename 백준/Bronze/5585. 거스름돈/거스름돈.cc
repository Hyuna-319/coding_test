#include <iostream> //표준 입출력
#include <vector> // 동적배열




int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int m ;
    std::cin >> m;
    
    int change = 1000 - m;
    int coins[] = {500, 100, 50, 10, 5, 1};
    
    int count =0;
    for (int i=0; i<6; i++){
        count += change / coins[i];
        change %= coins[i];

    }

    std::cout << count << '\n';


    return 0;
}