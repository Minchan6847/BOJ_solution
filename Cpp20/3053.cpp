//
// Created by Minchan Kim on 2022/05/18.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double R;
    cin >> R;

    cout << fixed;
    cout.precision(6);
    
    cout << R * R * M_PI << '\n';
    cout << R * R * 2;

    return 0;
}
