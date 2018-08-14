/**
 * @site: https://www.acmicpc.net/problem/9461
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 14
 */
#include <iostream>

using namespace std;

int main() {
    long P[101];
    int i, T, N;

    cin >> T;

    P[1] = 1;
    P[2] = 1;
    P[3] = 1;
    P[4] = 2;
    P[5] = 2;
    P[6] = 3;
    P[7] = 4;
    P[8] = 5;

    while ((T--)) {
        cin >> N;
        for (i = 9; i <= N; i++) {
            P[i] = P[i - 5] + P[i - 1];
        }
        cout << P[N] << endl;
    }

    return 0;

}