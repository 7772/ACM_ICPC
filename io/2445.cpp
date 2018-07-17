/**
 * @site: https://www.acmicpc.net/problem/2445
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

    for(i = N; i >= 1; i--) {
        for(j = i; j <= N; j++) {
            cout << "*";
        }
        for(k = 1; k < (2*i)-1; k++) {
            cout << " ";
        }
        for(j = i; j <= N; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for(i = 1; i < N; i++) {
        for(j = i; j < N; j++) {
            cout << "*";
        }
        for(k = 0; k <= (2*i)-1; k++) {
            cout << " ";
        }
        for(j = i; j < N; j++) {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}