/**
 * @site: https://www.acmicpc.net/problem/10950
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int test_case;
    int a, b;

    cin >> test_case;

    while((test_case--)) {
        cin >> a >> b;
        cout << a + b << endl;
    }

    return 0;
}