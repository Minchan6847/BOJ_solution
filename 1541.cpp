//
// Created by Minchan Kim on 2022/06/04.
//
// 2,080 KB, 0 ms
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void split(vector<string> &v, const string &s, const char &delimiter) {
    istringstream iss(s);
    string buffer;

    while (getline(iss, buffer, delimiter))
        v.emplace_back(buffer);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    vector<string> v;
    split(v, s, '-');

    vector<string> temp;
    int sum = 0;
    split(temp, v[0], '+');
    for (const auto &elem: temp)
        sum += stoi(elem);

    temp.clear();

    for (auto citr = v.cbegin() + 1; citr != v.cend(); ++citr) {
        split(temp, *citr, '+');
        for (const auto &elem: temp)
            sum -= stoi(elem);

        temp.clear();
    }

    cout << sum;

    return 0;
}
