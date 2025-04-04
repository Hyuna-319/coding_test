#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    
    unordered_map<string, int> clothMap;
    
    for (const auto& item : clothes) {
        string name = item[0];
        string type = item[1];
        
        clothMap[type] ++;
    }
    int answer = 1;
    for (const auto& [type, count]: clothMap) {
        answer *= (count +1);
    }
    return answer -1;
}