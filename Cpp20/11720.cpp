//
// Created by Minchan Kim on 2022/05/08.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    string digits("");
    cin >> digits;

    int sum = 0;

    for (string::const_iterator citr = digits.cbegin(); citr != digits.cend(); ++citr) {
        sum += *citr;
    }

    cout << sum - 48 * N;

    return 0;
}
