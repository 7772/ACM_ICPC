/**
 * @site: https://www.acmicpc.net/problem/1699
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 09
 */
#include <iostream>

using namespace std;

int main() {
    int DP[100001];
    int i, j, N;

    cin >> N;

    for (i = 1; i <= N; i++) {
        DP[i] = i;
        for (j = 2; j * j <= i; j++) {
            if (DP[i] > DP[i - (j * j)] + 1) {
                DP[i] = DP[i - (j * j)] + 1;
            }
        }
    }

    cout << DP[N] << endl;

    return 0;

}