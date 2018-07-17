/**
 * @site: https://www.acmicpc.net/problem/11022
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int test_case;
    int a, b;
    int i;
    cin >> test_case;

    for(i = 0; i < test_case; i++) {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " 
            << a << " + " << b << " = "
                << a + b << endl;
    }

    return 0;
}