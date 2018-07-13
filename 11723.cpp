/**
 * @site: https://www.acmicpc.net/problem/11723
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 13
 */

#include <iostream>
#include <string.h>

using namespace std;

int S, x;           // S is set of result

int main() {
    int i, M;           // M is test_case
    char op[10];        // operator

    // cin >> M;
    scanf("%d", &M);

    if( M < 1 || M > 3000000) {
        cout << "Input Error.." << endl;
        return -1;
    }

    while(M--) {
        scanf("%s", op);
        
        if(!strcmp(op, "add")) {
            scanf("%d", &x);
            x--;
            S |= (1 << x);
        }
        else if(!strcmp(op, "remove")) {
            scanf("%d", &x);
            x--;
            S = (S & ~(1 << x));
        }
        else if(!strcmp(op, "check")) {
            scanf("%d", &x);
            x--;
            int isExist = (S & (1 << x));
            if(isExist) {
                puts("1");
            }
            else puts("0");
        }
        else if(!strcmp(op, "toggle")) {
            scanf("%d", &x);
            x--;
            S ^= (1 << x);
        }
        else if(!strcmp(op, "all")) {
            S = (1 << 20) - 1;
        }
        else if(!strcmp(op, "empty")) {
            S = 0;
        }
        else {
            printf("Input Error..\n");
        }

    }

    return 0;
}