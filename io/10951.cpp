/**
 * @site: https://www.acmicpc.net/problem/10951
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int a, b;

    while(cin >> a >> b) {
        if(a < 0 || b > 10) break;
        cout << a + b << endl;
    }

    return 0;
}