/**
 * @site: https://www.acmicpc.net/problem/1463
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 17
 */

#include <iostream>

using namespace std;

int min(int a, int b) {
    return (a < b) ? (a) : (b);
}

int main() {
    int i;
    int N;
    int DP[1000001];

    cin >> N;

    DP[0] = DP[1] = 0;

    for (i = 2; i <= N; i++) {
        DP[i] = DP[i - 1] + 1;
        if (i % 2 == 0) DP[i] = min(DP[i], DP[i / 2] + 1);
        if (i % 3 == 0) DP[i] = min(DP[i], DP[i / 3] + 1);
    }

    cout << DP[N] << endl;

    return 0;
}
