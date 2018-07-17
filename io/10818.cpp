/**
 * @site: https://www.acmicpc.net/problem/10818
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int N, num;
    int i;
    int min = 1000000, max = -1000000;

    cin >> N;

    if(N < -1000000 || N > 1000000) return -1;

    for(i = 0; i < N; i++) {
        cin >> num;
        if(min > num) min = num;
        if(max < num) max = num;
    }

    cout << min << " " << max << endl;
    return 0;
}