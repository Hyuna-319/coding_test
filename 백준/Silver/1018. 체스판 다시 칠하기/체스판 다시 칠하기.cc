#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#include <functional>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<char>> board(n, std::vector<char>(m));

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> board[i][j];
        }
    }

    int result = 64;  

    
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {

            int repaint_W = 0;  
            int repaint_B = 0;  
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {

                    
                    char expected_W = ((x + y) % 2 == 0) ? 'W' : 'B';
                    char expected_B = ((x + y) % 2 == 0) ? 'B' : 'W';

                    
                    if (board[i + x][j + y] != expected_W) repaint_W++;
                    if (board[i + x][j + y] != expected_B) repaint_B++;
                }
            }

            
            result = std::min(result, std::min(repaint_W, repaint_B));
        }
    }

    std::cout << result << '\n';
    return 0;
}