#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_h = 0;
    int max_w = 0;
    
    for (vector<int> card :sizes) {
        int w = card[0];
        int h = card[1];
        
        if (w< h) swap(w,h);
       
        max_w = max(max_w,w);
        max_h = max(max_h,h);
        
        
    }
  
    
    
    return max_w * max_h;
}