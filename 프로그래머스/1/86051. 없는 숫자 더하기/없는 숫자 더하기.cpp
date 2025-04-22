#include <string>
#include <vector>
#include <map>

using namespace std;
int cnt[10];
int solution(vector<int> numbers) {
    for(int a: numbers){
        cnt[a]++;
    }
    int sum = 0;
    
    for(int i=1; i<10; i++){
        if(cnt[i] == 0) sum += i;
    }
    

    
  
    
    
    
    return sum;
}