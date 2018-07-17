/**
 * @site: https://www.acmicpc.net/problem/2741
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    int i;

    scanf("%d", &N);

    if(N > 100000) return -1;

    for(i = 0; i < N; i++) {
        // cout << i + 1 << endl;
        printf("%d\n", i + 1);
    }

    return 0;
}