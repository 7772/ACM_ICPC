/**
 * @site: https://code.plus/course/19
 * @auth: Landon Park
 * @date: 2018. 07. 12
 */

#include <iostream>

using namespace std;

int main() {
    int test_case;
    int * a, * b;
    int i;
    cin >> test_case;

    a = (int *) malloc( sizeof(int) * test_case );
    b = (int *) malloc( sizeof(int) * test_case );

    for(i = 0; i < test_case; i++) {
        cin >> a[i] >> b[i];
    }

    // print
    for(i = 0; i < test_case; i++) {
        cout << "Case #" << i + 1<< ": " << a[i] 
            << " + " << b[i] << " = " << a[i] + b[i] << endl;
    }

    // free
    free(a);
    free(b);
}