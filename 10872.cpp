//
// Created by Minchan Kim on 2022/05/12.
//
#include <iostream>

using namespace std;

int factorial(const int &n) {
    if (!n)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;
    cout << factorial(N);

    return 0;
}
