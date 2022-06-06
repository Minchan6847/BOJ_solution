//
// Created by Minchan Kim on 2022/05/08.
//
#include <iostream>

using namespace std;

int functionD(int n) {
    int val_of_function = n;
    while (n != 0) {
        val_of_function += n % 10;
        n /= 10;
    }
    return val_of_function;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int check[10036] = {0,}; // 1 - 10,000 // 1 => not self number // d(9999) = 10035 (max)

    for (int num = 1; num <= 10000; ++num) {
        check[functionD(num)] = 1;
        if (check[num] == 0)
            cout << num << "\n";
    }

    return 0;
}
