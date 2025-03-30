#include <iostream>


int main() {
    int n;
    std::cin >> n;

    bool paper[100][100] = {false};


    for (int i=0; i<n; i++){
        int x,y;
        std::cin >> x >> y ;


        for (int dx = 0; dx <10; dx++) {
            for (int dy =0; dy <10; dy++){
                paper[x+dx][y+dy] = true;
            }
        }
    }

    int result = 0;
    for (int i=0; i<100; i++){
        for (int j=0; j<100; j++){
            if (paper[i][j]) result ++;
        }
    }

    std::cout << result << std::endl;

    return 0;
}