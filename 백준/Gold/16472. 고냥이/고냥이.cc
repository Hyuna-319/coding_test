#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <map> // key → value 형태의 자료구조
#include <string> // 문자열
#include <algorithm> 

#include <unordered_map>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::string s;
    std::cin >> s;

    std::unordered_map<char, int> q;
    int start=0;
    int end=0;
    int max_len =0;
    
    while (end< s.size()) {
        q[s[end]]++;

        while(q.size() > N) {
            q[s[start]]--;
            if (q[s[start]] == 0) q.erase(s[start]);
            start++;
            
            
        }
        max_len = std::max(max_len, end-start+1);
        end++;
    }

    std::cout << max_len << '\n';


    return 0;
}