/**
 * @site: https://www.acmicpc.net/problem/11727
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 19
 */

#include <iostream>

using namespace std;


// Iterative DP
int main() {
    int DP[1001];
    int i, n;

    cin >> n;

    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 3;

    for (i = 3; i <= n; i++) {
        DP[i] = (DP[i-1] % 10007) + ((DP[i-2] * 2) % 10007);
    }

    cout << DP[n] % 10007 << endl;

    return 0;
}