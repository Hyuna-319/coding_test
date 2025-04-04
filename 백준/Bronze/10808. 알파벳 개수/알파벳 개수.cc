#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <map> // key → value 형태의 자료구조
#include <string> // 문자열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)

#include <unordered_map>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string s;
    std::cin >> s;

    std::vector<int> count(26,0);

    for (char c:s){
        count[c -'a']++;
    }

    for (int i=0; i<26; i++){
        std::cout << count[i] << ' ';
    }





    return 0;
}