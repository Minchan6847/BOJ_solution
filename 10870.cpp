//
// Created by Minchan Kim on 2022/05/12.
//
#include <iostream>

using namespace std;

int recursion(const int &n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}
