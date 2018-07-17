/**
 * @site: https://www.acmicpc.net/problem/2742
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

    while(N > 0) {
        printf("%d\n", (N--));
    }

    return 0;
}