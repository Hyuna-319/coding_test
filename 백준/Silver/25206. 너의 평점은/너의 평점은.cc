#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>
#include <cctype>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<std::tuple<std::string, double, std::string>> subjects;

    for (int i=0; i<20; i++){
        
        std::string name, GPA;
        double score;
        std::cin >> name >> score >> GPA;
        subjects.push_back(std::make_tuple(name,score,GPA));
    }
    
    double total = 0;
    double total_score = 0;
    for (int i=0; i<20; i++) {
        std::string result = std::get<2>(subjects[i]);
        double score = std::get<1>(subjects[i]);
        if (result == "A+") total += score * 4.5;
        if (result == "A0") total += score * 4.0;
        if (result == "B+") total += score * 3.5;
        if (result == "B0") total += score * 3.0;
        if (result == "C+") total += score * 2.5;
        if (result == "C0") total += score * 2.0;
        if (result == "D+") total += score * 1.5;
        if (result == "D0") total += score * 1.0;
        if (result == "F")  total += score * 0.0;
        if (result == "P") continue;

        total_score += score;

    }

    double avg = total / total_score ;

    std::cout << std::fixed << std::setprecision(4) << avg << '\n';

    return 0;
}