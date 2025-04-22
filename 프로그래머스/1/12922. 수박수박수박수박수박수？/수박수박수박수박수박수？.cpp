#include <string>
#include <vector>

using namespace std;
string solution(int n) {
    vector<string> s;
    for(int i=0; i<n;i++){
        if ( i %2 ==0) s.push_back("수");
        else s.push_back("박");
    }
    string answer = "";
    
    for (string a : s){
        answer += a;
    }

    return answer;
}