//
// Created by Minchan Kim on 2022/05/20.
//
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int num_of_2 = 0, num_of_5 = 0;
    while (N > 1) {
        int temp = N;

        while (!(temp % 10)) {
            temp /= 10;
            num_of_2++;
            num_of_5++;
        }
        while (!(temp % 2)) {
            temp /= 2;
            num_of_2++;
        }
        while (!(temp % 5)) {
            temp /= 5;
            num_of_5++;
        }

        N--;
    }

    cout << (num_of_2 > num_of_5 ? num_of_5 : num_of_2);

    return 0;
}
