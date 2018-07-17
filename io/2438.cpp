/**
 * @site: https://www.acmicpc.net/problem/2438
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    int i, j;
    cin >> N;

    for(i = 1; i <= N; i++) {
        for(j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}