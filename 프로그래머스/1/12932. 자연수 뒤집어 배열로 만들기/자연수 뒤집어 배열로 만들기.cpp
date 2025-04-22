#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    string s = to_string(n);
    string ret = s;
    vector<int> answer(s.size());
    
    reverse(ret.begin(), ret.end());
    
    for (int i=0; i<ret.size(); i++){
        answer[i] = ret[i]-'0';
    }
    
    return answer;
}