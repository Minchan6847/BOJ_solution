//
// Created by Minchan Kim on 2022/05/05.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int hour, minute, time_taken;
    cin >> hour >> minute >> time_taken;

    if (minute + time_taken % 60 >= 60)
        cout << (hour + time_taken / 60 + 1) % 24 << " " << minute + time_taken % 60 - 60;
    else
        cout << (hour + time_taken / 60) % 24 << " " << minute + time_taken % 60;

    return 0;
}
