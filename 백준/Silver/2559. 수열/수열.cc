#include <bits/stdc++.h>

using namespace std;


int N,K, temp, psum[100001], ret = INT_MIN;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    cin >> N >> K;
    for(int i=1; i<=N; i++){
        cin >> temp; psum[i] = psum[i-1] + temp;
       }

    for (int i =K; i<=N; i++){
        ret = max(ret, psum[i]- psum[i-K]);
    }
    
    cout << ret << '\n';
    return 0;
}
 

