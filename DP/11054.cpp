/**
 * @site: https://www.acmicpc.net/problem/11054
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 03
 */
#include <iostream>

using namespace std;

int main() {
    int ascending_dp[1001];
    int descending_dp[1001];
    int arr[1001] = { 0, };
    int T;
    int i, j;
    int ans = 1;

    cin >> T;
    for ( i = 1; i <= T; i++) cin >> arr[i];

    for (i = 1; i <= T; i++) {
        ascending_dp[i] = 1;

        for (j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                if (ascending_dp[i] <= ascending_dp[j] + 1) {
                    ascending_dp[i] = ascending_dp[j] + 1;
                }
            }
        }
    }

    for (i = T; i >= 1; i--) {
        descending_dp[i] = 1;

        for (j = T; j >= i; j--) {
            if (arr[i] > arr[j]) {
                if (descending_dp[i] <= descending_dp[j] + 1) {
                    descending_dp[i] = descending_dp[j] + 1;
                }
            }
        }
    }

    for (i = 1; i <= T; i++) {
        ans = max(ans, ascending_dp[i] + descending_dp[i] - 1);
    }

    cout << ans << endl;
    

    return 0;
}