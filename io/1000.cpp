/**
 * @site: https://www.acmicpc.net/problem/2558
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    if(a < 0) return -1;
    cin >> b;
    if(b > 10) return -1;
    cout << a + b << endl;
    return 0;
}