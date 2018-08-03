/**
 * @site: https://www.acmicpc.net/problem/11722
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 03
 */
#include <iostream>

using namespace std;

int main() {
    int DP[1001];
    int arr[1001] = { 0, };
    int T;
    int i, j;
    int max = 1;

    cin >> T;
    for ( i = 1; i <= T; i++) cin >> arr[i];

    for (i = 1; i <= T; i++) {
        DP[i] = 1;
        for (j = 1; j < i; j++) {
            if (arr[i] < arr[j]) {
                if (DP[i] <= DP[j] + 1) {
                    DP[i] = DP[j] + 1;
                    if (max < DP[i]) {
                        max = DP[i];
                    }
                }
            }
        }
    }

    cout << max << endl;

    // for (i = 1; i <= T; i++) cout << DP[i] << " " << endl;

    return 0;
}