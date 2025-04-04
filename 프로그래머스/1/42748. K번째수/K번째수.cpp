#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (vector<int> cmd : commands){
        int start = cmd[0] -1;
        int end = cmd[1];
        int k = cmd[2];
        
        vector<int> temp(array.begin()+start, array.begin()+end);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k-1]);
        
    }
    
    return answer;
}