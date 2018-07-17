/**
 * @site: https://www.acmicpc.net/problem/2739
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int N, i;

    cin >> N;

    if(N < 0) return -1;

    for(i = 1; i <= 9; i++) {
        cout << N << " * " << i << " = " 
            << N * i << endl;
    }

    return 0;
}