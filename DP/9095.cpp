/**
 * @site: https://www.acmicpc.net/problem/9095
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 19
 */

#include <iostream>

using namespace std;

int main() {
    int DP[11];
    int i, n, T;

    DP[0] = 1;
    DP[1] = 1;
    DP[2] = 2;

    cin >> T;

    while ((T--)) {
        cin >> n;
        for (i = 3; i <= n; i++) {
            DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
        }
        cout << DP[n] << endl;
    }

    return 0;
}