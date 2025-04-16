
#include <bits/stdc++.h>

using namespace std;


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    map<char, int> cnt;

    int n;
    string name;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> name;
        char first = name[0];
        if ('a' <= first && first <= 'z'){
            cnt[first]++;
        }
            }
    string res = "";
    for ( auto [ch, count] : cnt) {
        if(count >= 5) res += ch;
    }
    
    if (res.empty()) {
        cout << "PREDAJA" << '\n';
    } else {
        cout << res << '\n';
    }



    return 0;
}
