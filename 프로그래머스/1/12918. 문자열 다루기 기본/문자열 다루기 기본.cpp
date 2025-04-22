#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    int len = s.size();
    if(len !=4 && len !=6) return false;
    
    for(char a:s){
        if (!isdigit(a)) return false;
    }
    return true;

    
}