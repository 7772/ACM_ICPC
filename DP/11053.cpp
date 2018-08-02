/**
 * @site: https://www.acmicpc.net/problem/11053
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 02
 */

#include <iostream>

using namespace std;


// 다시 생각해볼 문제.
int main() {
    int DP[1001] = {};
    int arr[1001] = { 0, };
    int T;
    int i, j;
    int count = 1;
    int ans = 1;

    cin >> T;
    for ( i = 1; i <= T; i++) cin >> arr[i];

    for (i = 1; i <= T; i++) {
        DP[i] = 1;
        count = 1;

        for (j = 1; j <= i; j++) {
            if (arr[i] > arr[j]) {
                DP[i] = max(DP[i], DP[j] + 1);
            }
            ans = max(ans, DP[i]);
        }
    }

    cout << ans << endl;

    return 0;
}