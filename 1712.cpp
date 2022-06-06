//
// Created by Minchan Kim on 2022/05/10.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A = 0, B = 0, C = 0;
    cin >> A >> B >> C;

    int num_of_sales = 1;
    if (B < C) {
        num_of_sales = A / (C - B) + 1;
        /*
        while (A + B * num_of_sales >= C * num_of_sales) // long long
            num_of_sales++;
        */
    } else
        num_of_sales = -1;

    cout << num_of_sales;

    return 0;
}
