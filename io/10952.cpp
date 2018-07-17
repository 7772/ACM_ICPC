/**
 * @site: https://www.acmicpc.net/problem/10952
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int a, b;
    while(1) {
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        cout << a + b << endl;
    }

    return 0;
}