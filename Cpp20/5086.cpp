//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        int a, b;
        cin >> a >> b;
        if (!a)
            break;

        if (b % a == 0)
            cout << "factor\n";
        else if (a % b == 0)
            cout << "multiple\n";
        else
            cout << "neither\n";
    }

    return 0;
}
