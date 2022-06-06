//
// Created by Minchan Kim on 2022/05/19.
//
// reference: https://pangsblog.tistory.com/m/62
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int gcd(const int &m, const int &n) {
    return n == 0 ? m : gcd(n, m % n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    int GCD = v[N - 1] - v[N - 2];
    if (N > 2) {
        for (auto citr = v.crbegin() + 1; citr != v.crend() - 1; citr++) {
            GCD = gcd(GCD, *citr - *(citr + 1));
        }
    }

    set<int> divisor;
    for (int i = 2; i <= static_cast<int>(sqrt(GCD)); ++i) {
        if (!(GCD % i)) {
            divisor.emplace(i);
            divisor.emplace(GCD / i);
        }
    }

    for (const auto &elem: divisor)
        cout << elem << ' ';
    
    cout << GCD;

    return 0;
}
