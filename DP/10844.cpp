/**
 * @site: https://www.acmicpc.net/problem/10844
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 22
 */

#include <iostream>

using namespace std;

int main() {
    int DP[101][10] = {{0, 0},};
    int i, j, n, sum = 0;

    cin >> n;

    for( i = 1; i <= 9; i++) DP[1][i] = 1;


    for (i = 2; i <= n; i++) {
        for (j = 0; j <= 9; j++) {
            if (j == 0) DP[i][j] = DP[i - 1][j + 1] % 1000000000;
            else if (j == 9) DP[i][j] = DP[i - 1][j - 1] % 1000000000;
            else DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % 1000000000;
        }
    }

    for (i = 0; i <= 9; i++) sum = (sum + DP[n][i]) % 1000000000;

    cout << sum % 1000000000 << endl;

    return 0;
}