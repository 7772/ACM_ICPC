/**
 * @site: https://www.acmicpc.net/problem/11721
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 12
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int i = 0, tmp = 0;
    cin >> str;

    for(i = 0; i < str.length(); i++) {
        if(i % 10 == 0 && i != 0) {
            cout << endl;
            cout << str[i];
        }
        else cout << str[i];
    }

    cout << endl;
    return 0;
}
