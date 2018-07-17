/**
 * @site: https://www.acmicpc.net/problem/2446
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 17
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    int i, j, k;
    cin >> N;

    for(i = N; i >= 1; i--) {
        for(j = i; j < N; j++) {
            cout << " ";
        }
        for(k = 0; k < (2*i)-1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for(i = 2; i <= N; i++) {
        for(j = i; j < N; j++) {
            cout << " ";
        }
        for(k = 0; k < (2*i)-1; k++) {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}