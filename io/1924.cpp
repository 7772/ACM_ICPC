/**
 * @site: https://www.acmicpc.net/problem/1924
 * @github: https://github.com/7772
 * @auth: Landon Park
 * @date: 2018. 07. 16
 */

#include <iostream>

using namespace std;

const int DATE[12] = { 31, 28, 31, 30, 31, 30, 31,
                        31, 30, 31, 30, 31 };

const char * DATE_THE_WEEK[7] = {
    "SUN",
    "MON",
    "TUE",
    "WED",
    "THU",
    "FRI",
    "SAT"
};

int main() {
    int month, date;
    int i;
    int count_date = 0;

    cin >> month >> date;

    if(month < 1 || month > 12 
        || date < 1 || date > 31) return -1;
    
    for(i = 0; i < month - 1; i++) {
        count_date += DATE[i];
    }

    count_date += date;

    cout << DATE_THE_WEEK[(count_date % 7)] << endl;

    return 0;
}

// int main() {
//     int month, date;
//     int i;

//     cin >> month >> date;

//     if(month < 1 || month > 12 
//         || date < 1 || date > 31) return -1;
    
//     for(i = 0; i < month - 1; i++) {
//         date += DATE[i];
//     }

//     cout << DATE_THE_WEEK[(date % 7)] << endl;

//     return 0;
// }