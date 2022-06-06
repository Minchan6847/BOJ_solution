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
        //if (temp[0] >= '0' && temp[0] <= '9') // memory: 20,664 KB, time: 152 ms
        if (temp[0] >= 48 && temp[0] <= 57) // memory: 20,664 KB, time: 116 ms
            cout << book[stoi(temp)];
        else
            cout << um.find(temp)->second;
        cout << '\n';
    }

    return 0;
}
