//
// Created by Minchan Kim on 2022/05/06.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int cycle = 0;
    int new_num = N;
    while (true) {
        new_num = new_num % 10 * 10 + (new_num / 10 + new_num % 10) % 10;
        cycle++;
        if (N == new_num)
            break;
    }

    cout << cycle;

    return 0;
}
