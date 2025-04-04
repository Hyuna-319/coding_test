#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <map> // key → value 형태의 자료구조
#include <string> // 문자열
#include <algorithm> //정렬, 최대최소(max_element)




int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int A,B,C;
    std::cin >> A >> B >> C;

    int result = A*B*C;
    std::vector<int> count(10, 0);
    
    std::string s = std::to_string(result);

    for(char c:s){
        count[c-'0']++;
    }

    for(int i=0; i<count.size(); i++){
        std::cout << count[i] << '\n';
    }


    return 0;
}