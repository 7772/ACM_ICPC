/**
 * @site: https://www.acmicpc.net/problem/9095
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 19
 */

#include <iostream>

using namespace std;

// 일반적인 방법
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

// 중복 계산을 피하기 위해
// 미리 DP 연산을 끝냄
// int main() {
//     int DP[11];
//     int i, n, T;

//     DP[0] = 1;
//     DP[1] = 1;
//     DP[2] = 2;

//     cin >> T;

//     for (i = 3; i <= 11; i++) {
//         DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
//     }

//     while ((T--)) {
//         cin >> n;
//         cout << DP[n] << endl;
//     }

//     return 0;
// }