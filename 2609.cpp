//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num[2];
    cin >> num[0] >> num[1];

    int index_of_small = 0;
    if (num[0] > num[1])
        index_of_small = 1;

    int divisor = 2;
    int GCD = 1, LCM;
    while (divisor <= num[index_of_small]) {
        if (!(num[0] % divisor) && !(num[1] % divisor)) {
            num[0] /= divisor;
            num[1] /= divisor;
            GCD *= divisor;
        } else
            divisor++;
    }
    LCM = GCD * num[0] * num[1];

    cout << GCD << '\n' << LCM;

    return 0;
}
