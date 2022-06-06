//
// Created by Minchan Kim on 2022/05/15.
//
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main() {
    string N("");
    cin >> N;

    sort(N.begin(), N.end(), greater<>());
    cout << N;

    return 0;
}
