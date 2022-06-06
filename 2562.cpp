//
// Created by Minchan Kim on 2022/05/06.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input = 0, max = 0, position = 1;
    for (int i = 1; i <= 9; ++i) {
        cin >> input;
        if(input > max) {
            max = input;
            position = i;
        }
    }

    cout << max << "\n" << position;

    return 0;
}
