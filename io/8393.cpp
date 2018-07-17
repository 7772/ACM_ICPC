/**
 * @site: https://www.acmicpc.net/problem/8393
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int i, n ,sum = 0;

    cin >> n;
    if(n < 0) return -1;

    for(i = 1; i <= n; i++) sum += i;

    cout << sum << endl;


    return 0;
}