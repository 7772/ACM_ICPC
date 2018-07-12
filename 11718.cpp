/**
 * @site: https://www.acmicpc.net/problem/11718
 * @auth: Landon Park
 * @date: 2018. 07. 12
 */

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int i = 0;

    while(1) {
        getline(cin, str);
        cout << str << endl;
        if(i > 100) break;
        i++;
    }
    
    return 0;
}