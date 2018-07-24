/**
 * @site: https://www.acmicpc.net/problem/9465
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 24
 */

#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b) ? (a) : (b);
}

int main() {
    int test_case, arr[2][100001], DP[2][100001];
    int i, j, N;

    cin >> test_case;

    arr[0][0] = arr[0][1] = 0;
    DP[0][0] = DP[0][1] = 0;

    while ((test_case--)) {
        cin >> N;
        
        for (i = 0; i <= 1; i++) {
            for (j = 1; j <= N; j++) {
                cin >> arr[i][j];
            }
        }

        DP[0][1] = arr[0][1];
        DP[1][1] = arr[1][1];

        for (j = 2; j <= N; j++) {
            DP[0][j] = max( DP[1][j - 1], (DP[1][j - 2]) ) + arr[0][j];
            DP[1][j] = max( DP[0][j - 1], (DP[0][j - 2]) ) + arr[1][j];
        }
        cout << max(DP[0][N], DP[1][N]) << endl;
    }

    return 0;
}
