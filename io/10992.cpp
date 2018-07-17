/**
 * @site: https://www.acmicpc.net/problem/10992
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 17
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    int i, j, k, n, m;

    cin >> N;

    for(i = 1; i <= N; i++) {
        for(j = N; j > i;  j--) {
            cout << " ";
        }
        for(k = 1; k <= 2 * i - 1;  k++) {
            if(k >= 2 && k <= 2 * i - 2 && i != N) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
    return 0;
}