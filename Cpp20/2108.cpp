//
// Created by Minchan Kim on 2022/05/15.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

enum class k {
    MAX = 4000
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt[static_cast<int>(k::MAX) * 2 + 1] = {0,};
    int N = 0;
    cin >> N;

    vector<int> v;
    int temp = 0, sum = 0;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        sum += temp;
        cnt[temp + static_cast<int>(k::MAX)]++;
        v.emplace_back(temp);
    }

    sort(v.begin(), v.end());

    // 소수점 0번째 자리까지 나타냄 (소수점 첫번째 자리에서 반올림)
    cout << fixed;
    cout.precision(0);

    // 산술평균
    double avg = static_cast<double>(sum) / static_cast<double>(N);
    cout << ((avg > -0.5 && avg < 0.0) ? 0 : avg) << '\n';
    // 중앙값
    cout << v[N / 2] << '\n';

    int most_freq_num = 0;
    int most_freq = 0;
    bool find_second_freq_num = false;
    for (int i = 0; i < static_cast<int>(k::MAX) * 2 + 1; ++i) {
        if (cnt[i] > most_freq) {
            most_freq = cnt[i];
            most_freq_num = i;
            find_second_freq_num = true;
        } else if (cnt[i] == most_freq && find_second_freq_num) {
            most_freq_num = i;
            find_second_freq_num = false;
        }
    }
    // 최빈값
    cout << most_freq_num - static_cast<int>(k::MAX) << '\n';
    // 범위: 최댓값 - 최솟값
    cout << v[N - 1] - v[0];

    return 0;
}
