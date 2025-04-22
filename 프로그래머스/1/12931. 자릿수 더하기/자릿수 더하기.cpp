#include <iostream>
#include <string>


using namespace std;

int solution(int n)
{   string s = to_string(n);
    int arr[s.size()];
    int sum =0;
    for (int i=0; i<s.size(); i++){
        sum += s[i]-'0';
    }
    

    return sum;
}