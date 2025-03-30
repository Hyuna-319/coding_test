#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <string>
#include <algorithm>
#include <functional>


int main() {
    int n;
    std::cin >> n;
    
    std::set<std::string> uniqe_words;
    std::vector<std::tuple<int, std::string>> words;

    for(int i=0; i<n; i++){
        std::string word;
        std::cin >> word ;
        int len = word.length();
        
        if(uniqe_words.find(word) == uniqe_words.end()){
            uniqe_words.insert(word);
            words.push_back(std::make_tuple(len, word));
        }

        
    }

    std::sort(words.begin(), words.end());

    for (int i=0; i<words.size(); i++){
        std::cout << std::get<1>(words[i]) << '\n';
    }



    return 0;

}