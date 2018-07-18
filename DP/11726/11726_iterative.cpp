/**
 * @site: https://www.acmicpc.net/problem/11726
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 18
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
    DP[2] = 2;

    for (i = 3; i <= n; i++) {
        DP[i] = (DP[i-1] % 10007) + (DP[i-2] % 10007);
    }

    cout << DP[n] % 10007 << endl;

    return 0;
}