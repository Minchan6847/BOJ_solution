//
// Created by Minchan Kim on 2022/05/20.
//
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int num_of_5 = 0;
    while (N >= 5) {
        int temp = N;
        while (!(temp % 5)) {
            temp /= 5;
            num_of_5++;
        }
        N--;
    }

    cout << num_of_5;

    return 0;
}
