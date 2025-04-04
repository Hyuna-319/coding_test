#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> Mymap;
    
    for (string name : participant) {
        Mymap[name]++;
    }
    
    for (string name : completion){
        Mymap[name]--; }
    
    for (auto it : Mymap){
        if (it.second > 0) {
            return it.first;
        }
    
    }

    return "";
}