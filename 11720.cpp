/**
 * @site: https://www.acmicpc.net/problem/11720
 * @auth: Landon Park
 * @date: 2018. 07. 12
 */

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Bad code

// int main() {
//     int test_case;
//     int i, sum = 0;
//     string str;
//     // const char * str;

//     cin >> test_case;
//     if(test_case < 1 || test_case > 100) return 0;
//     cin >> str;

//     // getline(cin, str);

//     for(i = 0; i < test_case; i++) {
//         // char tmp = str[i];
//         sum += (int)(str[i]);
//     }

//     cout << sum << endl;

//     return 0;
// }


// Good code
int main() {
    int test_case;
    int i, sum = 0;

    cin >> test_case;
    if(test_case < 1 || test_case > 100) return 0;

    for(i = 0; i < test_case; i++) {
        char ch;
        cin >> ch;
        sum += ch - '0';
    }

    cout << sum << endl;
}
