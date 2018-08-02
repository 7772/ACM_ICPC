/**
 * @site: https://www.acmicpc.net/problem/2156
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 01
 */

#include <iostream>

using namespace std;

int max(int a, int b, int c) {
    return (a > b) ? ( (a > c) ? (a) : (c) ) : ( (b > c) ? (b) : (c) );
}

int main() {
    int DP[10001] = { 0, };
    int arr[10001] = { 0, };
    int T;
    int i;

    cin >> T;
    for ( i = 1; i <= T; i++) cin >> arr[i];

    DP[1] = arr[1];
    DP[2] = arr[1] + arr[2];

    for( i = 3; i <= T; i++) {
        DP[i] = max(DP[i - 1], DP[i - 3] + arr[i - 1] + arr[i], DP[i - 2] + arr[i]);
    }

    cout << DP[T] << endl;

    return 0;
}
