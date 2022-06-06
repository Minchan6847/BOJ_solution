//
// Created by Minchan Kim on 2022/05/18.
//
#include <iostream>
//#include <set>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string S;
    cin >> S;


    unordered_set<string> us; // memory: 209,852 KB, time: 496 ms // O(N^2), S: size of N
    //set<string> set; // memory: 212,040 KB, time: 804 ms // O(N^3*logN)

    int size = static_cast<int>(S.size());
    for (int length = 1; length <= size; ++length)
        for (int pos = 0; pos <= size - length; ++pos)
            us.emplace(S.substr(pos, length));

    cout << us.size();

    return 0;
}
