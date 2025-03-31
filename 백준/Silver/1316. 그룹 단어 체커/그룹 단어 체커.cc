#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    
    int count =0;

    while (n--) {
        std::string s;
        std::cin >> s;

        std::vector<bool> visited(26, false);
        bool group = true;
        

        for(int i=0; i<s.length(); i++){
            if (i>0 and s[i] == s[i-1]) continue;

            if (visited[s[i]-'a']) {
                group = false;
                break;
            }

            visited[s[i]-'a'] = true;
        }

        if (group) count ++;
  
    }

    std::cout << count << '\n';
    

    return 0;
}