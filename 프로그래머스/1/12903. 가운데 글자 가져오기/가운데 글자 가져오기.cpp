#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
    int len = s.size();
    int idx = len / 2;
    string answer = "";
    if(len % 2 != 0){
        answer += s[idx];
        
    }else {
        answer += s[idx-1];
        answer += s[idx];
        
    }
    
    return answer;
}