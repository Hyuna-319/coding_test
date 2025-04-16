#include <bits/stdc++.h>

using namespace std;

int A,B,C,a,b,cnt[104],ret;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    cin >> A >> B >> C;
    for(int i=0; i<3; i++){
        cin >> a >> b;
        for (int j=a; j<b; j++) cnt[j] ++ ;
    }

    for(int j=1; j<100; j++){
        if (cnt[j]){
        if (cnt[j] ==1) ret += A;
        else if (cnt[j] == 2) ret += 2*B;
        else if (cnt[j] == 3) ret += 3*C;
    }
}

    cout <<  ret << '\n';



    return 0;
}