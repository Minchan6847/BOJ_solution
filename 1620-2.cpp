//
// Created by Minchan Kim on 2022/05/17.
//
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_map<string, int> um;
    string *book = new string[N + 1];
    for (int i = 1; i <= N; ++i) {
        string temp;
        cin >> temp;
        um.emplace(temp, i);
        book[i] = temp;
    }

    for (int i = 0; i < M; ++i) {
        string temp;
        cin >> temp;
        //unordered_map<string, int>::const_iterator itr = um.find(temp); // memory: 20,664 KB, time: 124 ms
        auto itr = um.find(temp); // memory: 20,664 KB, time: 112 ms
        if (itr != um.end())
            cout << itr->second;
        else
            cout << book[stoi(temp)];
        cout << '\n';
    }

    return 0;
}
