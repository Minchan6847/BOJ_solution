//
// Created by Minchan Kim on 2022/06/10.
//
// 제6회 천하제일 코딩대회 예선 Open Contest
// A
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        double h, w;
        cin >> h >> w;

        double bmi = 10000 * w / h / h;
        if (h < 140.1)
            cout << 6;
        else if (h < 146)
            cout << 5;
        else if (h < 159)
            cout << 4;
        else if (h < 161) {
            if (bmi < 16.0 || bmi >= 35)
                cout << 4;
            else
                cout << 3;
        } else if (h < 204) {
            if (bmi < 16.0 || bmi >= 35.0)
                cout << 4;
            else if (bmi < 18.5 || bmi >= 30.0)
                cout << 3;
            else if (bmi < 20.0 || bmi >= 25.0)
                cout << 2;
            else
                cout << 1;
        }
        cout << '\n';
    }

    return 0;
}
