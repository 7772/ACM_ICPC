/**
 * @site: https://www.acmicpc.net/problem/2439
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    int i, j, k;
    cin >> N;

    for(i = N; i > 0; i--) {
        for(j = 1; j < i; j++) {
            cout << " ";
        }
        for(k = i; k <= N; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}