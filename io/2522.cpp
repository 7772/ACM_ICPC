/**
 * @site: https://www.acmicpc.net/problem/2522
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

    for(i = 1; i <= N; i++) {
        for(j = i; j < N; j++) {
            cout << " ";
        }
        for(k = i; k > 0; k--) {
            cout << "*";
        }
        cout << endl;
    }

    for(i = 1; i < N; i++) {
        for(k = 1; k <= i; k++) {
            cout << " ";
        }
        for(j = i; j < N; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}