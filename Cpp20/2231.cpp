//
// Created by Minchan Kim on 2022/05/14.
//
// reference: https://min-ingful.tistory.com/109
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int length_of_N = 0;
    for (int i = N; i > 0; i /= 10)
        length_of_N++;

    int sum = 0;
    for (int i = N - 9 * length_of_N; i <= N; ++i) {
        sum = i;
        for (int j = i; j > 0; j /= 10)
            sum += j % 10;
        if (sum == N) {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}
