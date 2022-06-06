//
// Created by Minchan Kim on 2022/05/09.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A(""), B("");
    cin >> A >> B;

    int reverse_A = (A.at(0) - 48) + (A.at(1) - 48) * 10 + (A.at(2) - 48) * 100;
    int reverse_B = (B.at(0) - 48) + (B.at(1) - 48) * 10 + (B.at(2) - 48) * 100;

    cout << (reverse_A > reverse_B ? reverse_A : reverse_B);

    return 0;
}
