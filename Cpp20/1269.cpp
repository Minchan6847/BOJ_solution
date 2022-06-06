//
// Created by Minchan Kim on 2022/05/17.
//
// memory: 11,536 KB, time: 128 ms
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_set<int> us;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        us.emplace(temp);
    }

    int res = N + M;
    for (int i = 0; i < M; ++i) {
        int temp;
        cin >> temp;
        if (us.count(temp))
            res -= 2;
    }

    cout << res;

    return 0;
}

/*
// 제출번호: 43416874, ID: zenith82114
// memory: 3,592 KB, time: 68 ms
#include<bits/stdc++.h>
using namespace std;

vector<int> A, B;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int nA, nB; cin >> nA >> nB;
    A.resize(nA);
    for (auto& a : A) cin >> a;
    B.resize(nB);
    for (auto& b : B) cin >> b;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int cnt = 0;
    while (nA && nB) {
        if (A.back() > B.back()) {
            A.pop_back();
            --nA, ++cnt;
        }
        else if (A.back() < B.back()) {
            B.pop_back();
            --nB, ++cnt;
        }
        else {
            A.pop_back(), nA--;
            B.pop_back(), nB--;
        }
    }
    cnt += (nA + nB);
    cout << cnt << '\n';

    return 0;
}
*/