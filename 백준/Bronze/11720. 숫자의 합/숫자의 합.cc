#include <iostream>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += s[i] -'0';
    }

    std::cout << sum  << std::endl;
    return 0;
}