/**
 * @site: https://www.acmicpc.net/problem/10953
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int test_case;
    int a, b;
    char comma;

    cin >> test_case;

    while((test_case--)) {
        cin >> a >> comma >> b;
        cout << a + b << endl;
    }

    return 0;
}