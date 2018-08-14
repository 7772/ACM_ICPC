/**
 * @site: https://www.acmicpc.net/problem/2225
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 14
 */
#include <iostream>

using namespace std;

int main() {
    int DP[201][201] = {0,};
    int N, K, i, j;

    cin >> N;
    cin >> K;

    for (i = 1; i <= K; i++) DP[0][i] = 1;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= K; j++) {
            DP[i][j] = (DP[i][j - 1] % 1000000000) + (DP[i - 1][j] % 1000000000);
        }
    }

    cout << (DP[N][K] % 1000000000) << endl;

    return 0;

}

