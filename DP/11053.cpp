/**
 * @site: https://www.acmicpc.net/problem/11053
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 08. 02
 */
#include <iostream>

using namespace std;

int main() {
    int DP[1001];
    int arr[1001] = { 0, };
    int T;
    int i, j;
    int max = 1;

    cin >> T;
    for ( i = 1; i <= T; i++) cin >> arr[i];

    for (i = 1; i <= T; i++) {
        DP[i] = 1;

        for (j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                // sum += arr[j];
                /**
                 * 이전 알고리즘들과 다른 점.
                 * 
                 * DP 배열은 해당 idx 에서 결과값을 나타냈었지만
                 * 이 알고리즘은 DP 배열이 해당 idx 에서 
                 * 매번 결과값을 나타내는 것이 아니다.
                 * 만약 새로 검사하는 값이 이전 배열의 idx 들 보다 크지 않다면
                 * 해당 idx 에서의 DP 배열은 1 로 고정된다.
                 */
                if (DP[i] <= DP[j] + 1) {
                    DP[i] = DP[j] + 1;
                    if (max < DP[i]) {
                        max = DP[i];
                    }
                }
            }
        }
    }

    cout << max << endl;

    // for (i = 1; i <= T; i++) cout << DP[i] << " " << endl;

    return 0;
}