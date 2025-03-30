#include <iostream>
#include <vector>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n ;
    std::cin >> n;
    
    while (n--) {
        std::string s;
        std::cin >> s;

        std::vector<char> v;
        for(int i = 0; i < s.length(); i++) {
            v.push_back(s[i]);
        }

        int sum = 0;
        int score = 0;

        for (int i=0; i < v.size(); i++) {
            if (v[i] == 'O'){
                score ++ ;
                sum += score;

            } else {
                score = 0;
            }
        }

        std::cout << sum << std::endl;
  

    }

    return 0;
}
    
    
