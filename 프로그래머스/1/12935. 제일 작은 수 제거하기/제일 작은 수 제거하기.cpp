#include <string>
#include <vector>
#include <climits>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_val = INT_MAX;
    
    for(int i=0; i<arr.size(); i++){
        min_val = min(min_val,arr[i]);    
    }
    
    for (int i=0; i<arr.size(); i++){
        if (arr[i] == min_val) continue;
        else answer.push_back(arr[i]);
    }
    
    
    if (answer.empty()) answer.push_back(-1);
    
    return answer;
}