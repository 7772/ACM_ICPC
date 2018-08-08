/**
 * @site: https://www.acmicpc.net/problem/1912
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 03
 */
#include <iostream>

using namespace std;

// int main() {
//     int n;
//     int arr[100001];
//     int DP[100001];
//     int i, j, k;
//     int max = -2147483648, sum = 0;

//     cin >> n;
//     for (i = 1; i <= n; i++) cin >> arr[i];

//     for (i = 1; i <= n; i++) {
//         DP[i] = -2147483648;
//         for (j = i; j <= n; j++) {
//             sum = 0;
//             for (k = i; k <= j; k++) {
//                 sum += arr[k];
//                 // cout << arr[k] << " ";
//             }
//             // cout << endl;
//             // DP[j] = sum;
//             if (DP[i] < sum) DP[i] = sum;
//         }

//         if (max < DP[i]) max = DP[i];
//     }

//     // for (i = 1; i <= n; i++) {
//     //     if (max < DP[i]) max = DP[i];
//     // }

//     cout << max << endl;

//     return 0;
// }

int max(int a, int b) {
    return (a > b) ? (a) : (b);
}

int main() {
    int arr[100001];
    int sum = 0, result = -2100000000;
    int i, T;

    cin >> T;

    for (i = 1; i <= T; i++) cin >> arr[i];

    for (i = 1; i <= T; i++) {
        if (sum + arr[i] > 0) {
            sum += arr[i];
            result = max(result, sum);
        }
        else {
            result = max(result, sum + arr[i]);
            sum = 0;
        }
    }

    cout << result << endl;
}