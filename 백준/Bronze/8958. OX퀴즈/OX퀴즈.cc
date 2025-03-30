#include <iostream>
#include <string>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int n;
    std::cin >> n;

    while (n--) {
        std::string s;
        std::cin >> s;
        
        int score = 0;
        int sum = 0;

        for (int i=0; i < s.length(); i++) {
            if (s[i] == 'O') {
                score ++ ;
                sum += score;
            }
            else {
                score = 0;
            }
        }
        
        std::cout << sum << std::endl;

        
    }
    return 0;
}