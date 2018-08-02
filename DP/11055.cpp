/**
 * @site: https://www.acmicpc.net/problem/11055
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 02
 */

#include <iostream>

using namespace std;

int main() {
    int DP[1001];
    int arr[1001] = { 0, };
    int T;
    int i, j;
    int max;

    cin >> T;
    for ( i = 1; i <= T; i++) cin >> arr[i];

    max = arr[1];

    for (i = 1; i <= T; i++) {
        DP[i] = arr[i];

        for (j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                if (DP[i] <= DP[j] + arr[i]) {
                    DP[i] = DP[j] + arr[i];
                    if (max < DP[i]) {
                        max = DP[i];
                    }
                }
            }
        }
    }

    cout << max << endl;

    return 0;
}