#include <bits/stdc++.h>

using namespace std;


int t, n;
string a,b;
int main() {
    std::ios::sync_with_stdio(false);
    cin >> t;
    while(t--) {
        map<string, int> mymap;

        cin >> n;
        
        for (int i=0; i<n; i++){
            cin >> a >> b;
            mymap[b] ++;
        }
        long long ret = 1;
        for (auto c : mymap){
            ret *= ((long long)c.second+1);

        }
        ret--;
        cout << ret << '\n';

        }



    return 0;

}
