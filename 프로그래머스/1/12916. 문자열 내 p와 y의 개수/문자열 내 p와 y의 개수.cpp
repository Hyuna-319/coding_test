#include <string>
#include <iostream>
#include <cctype> 
#include <map>
using namespace std;

map<char, int> cnt;
bool solution(string s)
{  
    for(char a: s){
        a = toupper(a);
        cnt[a]++;
    }
   
    return cnt['P'] == cnt['Y'];
    
}