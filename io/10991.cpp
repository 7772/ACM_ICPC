/**
 * @site: https://www.acmicpc.net/problem/10991
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

    for(i = N; i > 0; i--) {
        for(j = i - 1; j > 0;  j--) {
            cout << " ";
        }
        for(j = i; j <= N;  j++) {
            cout << "*";
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}