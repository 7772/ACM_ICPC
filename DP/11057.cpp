/**
 * @site: https://www.acmicpc.net/problem/11057
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 23
 */

#include <iostream>

using namespace std;

int main() {
    int DP[1001][10] = { 0, };
    int i, j, k, N, sum = 0, ans = 0;

    cin >> N;

    for (i = 0; i < 10; i++) DP[1][i] = 1;

    for (i = 2; i <= N; i++) {
        for (j = 0; j < 10; j++) {
            sum = 0;
            for (k = j; k < 10; k++) {
                sum = sum % 10007 + DP[i - 1][k] % 10007;
            }
            DP[i][j] = sum % 10007;
        }
    }

    for (i = 0; i < 10; i++) ans = ans % 10007 + DP[N][i] % 10007;

    cout << ans % 10007 << endl;

    return 0;
}
