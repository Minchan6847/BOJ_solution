//
// Created by Minchan Kim on 2022/06/26.
//
// O(N/2) / 1 <= N <= 5 / N: size of num
// 2,024 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        string num;
        cin >> num;

        if (num == "0")
            break;

        int size_of_num = num.size();
        bool yes = true;
        for (int i = 0; i < size_of_num / 2; ++i) {
            if (num[i] != num[size_of_num - 1 - i]) {
                yes = false;
                break;
            }
        }

        if (yes)
            cout << "yes";
        else
            cout << "no";
        cout << '\n';
    }

    return 0;
}
