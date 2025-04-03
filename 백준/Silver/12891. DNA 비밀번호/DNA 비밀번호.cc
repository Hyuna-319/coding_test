#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <string> // 문자열
#include <algorithm> //정렬, 최대최소(max_element)


int getIdx(char c) {
    if (c== 'A') return  0;
    if (c == 'C') return 1;
    if (c == 'G') return 2;
    return 3;

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int S, P;
    std::cin >> S >> P;

    std::string s;
    std::cin >> s;

    int check[4];
    int current[4] = {};

    for (int i=0; i<4; i++) std::cin >> check[i];

    for (int i=0; i<P; i++){
        current[getIdx(s[i])] ++ ;
    }
    auto valid = [&]() {
        for (int i=0; i<4; i++){
            if (current[i] < check[i]) return false;
        }
        return true;
    };
    int result = 0;
    if (valid()) result ++;

    for (int i=P; i <S; i++) {
        current[getIdx(s[i-P])]--;
        current[getIdx(s[i])]++;
        if (valid()) result ++;
    }

    std::cout << result << '\n';
    

    return 0;
}