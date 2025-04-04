#include <iostream> //표준 입출력
#include <vector> // 동적배열
#include <map> // key → value 형태의 자료구조
#include <string> // 문자열
#include <algorithm> //정렬, 최대최소(max_element)
#include <functional> //비교 (greater<>)



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::map<std::string, std::string, std::greater<>> office;

    for(int i=0; i<N; i++){
        std::string name, work;
        std::cin >> name >> work;
        office[name] = work;
    }

    for (auto [name, work]: office){
        if (work == "enter") std::cout << name << '\n';
    }


    return 0;
}