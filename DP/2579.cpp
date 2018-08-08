/**
 * @site: https://www.acmicpc.net/problem/2579
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 08
 */
#include <iostream>

using namespace std;

int main() {
    int DP[301];
    int arr[301];
    int N, i;

    cin >> N;

    for (i = 1; i <= N; i++) cin >> arr[i];

    DP[0] = arr[0] = 0;
    DP[1] = arr[1];
    DP[2] = arr[1] + arr[2];

    for (i = 3; i <= N; i++) {
        DP[i] = max(DP[i - 3] + arr[i - 1], DP[i - 2]) + arr[i];
    }

    cout << DP[N] << endl;

    return 0;
}