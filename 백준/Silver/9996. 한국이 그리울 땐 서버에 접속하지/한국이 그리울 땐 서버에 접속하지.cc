#include <bits/stdc++.h>

using namespace std;


int n;
string s, origin_s, pre, suf;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    cin >> n;
    cin >> origin_s;

    int pos = origin_s.find('*');
    pre = origin_s.substr(0,pos);
    suf = origin_s.substr(pos+1);

    for (int i=0; i<n; i++){
        cin >> s;
        if (pre.size() + suf.size() > s.size()){
            cout << "NE\n";
        } else {
            if (pre == s.substr(0,pre.size()) && suf == s.substr(s.size()-suf.size())) 
            cout << "DA\n";
            else cout << "NE\n";
        }
    }


    return 0;


}