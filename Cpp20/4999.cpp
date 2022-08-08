//
// Created by Minchan Kim on 2022/08/08.
//
// 2,024 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    string jae, doctor;
    cin >> jae >> doctor;
    cout << (jae.size() >= doctor.size() ? "go" : "no");

    return 0;
}
