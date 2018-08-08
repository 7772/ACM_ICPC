/**
 * @site: https://www.acmicpc.net/problem/1912
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 08
 */
#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b) ? (a) : (b);
}

int main() {
    int arr[100001];
    int sum = 0, result = -2100000000;
    int i, T;

    cin >> T;

    for (i = 1; i <= T; i++) cin >> arr[i];

    for (i = 1; i <= T; i++) {
        if (sum + arr[i] > 0) {
            sum += arr[i];
            result = max(result, sum);
        }
        else {
            result = max(result, sum + arr[i]);
            sum = 0;
        }
    }

    cout << result << endl;
}