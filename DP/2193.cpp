/**
 * @site: https://www.acmicpc.net/problem/2193
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 24
 */

#include <iostream>

using namespace std;

int main() {
    unsigned long long DP[91][2] = {0,};
    unsigned long long ans = 0;
    int i, N;

    cin >> N;

    DP[1][0] = 0;
    DP[1][1] = 1;

    for (i = 2; i <= N; i++) {
        DP[i][0] = DP[i - 1][0] + DP[i - 1][1];
        DP[i][1] = DP[i - 1][0];
    }

    ans = DP[N][0] + DP[N][1];

    cout << ans << endl;

    return 0;
}
