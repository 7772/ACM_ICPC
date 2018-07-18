/**
 * @site: https://www.acmicpc.net/problem/11726
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 18
 */

#include <iostream>

using namespace std;

// Memoization DP
int memo_dynamic_programming(int n, int * memo) {
    if (memo[n] != 0) return memo[n];

    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else {
        memo[n] = memo_dynamic_programming(n-1, memo) + memo_dynamic_programming(n-2, memo);
    }

    return (memo[n] % 10007);
}

int main() {
    int memo[1001] = { 0, };
    int n;

    cin >> n;

    cout << memo_dynamic_programming(n, memo) << endl;

    return 0;
}