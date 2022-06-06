//
// Created by Minchan Kim on 2022/05/07.
//
//              4ms             //
#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a) {
    long long ans = 0;
    for (vector<int>::const_iterator itr = a.cbegin(); itr != a.cend(); ++itr) {
        ans += *itr;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(15);

    cout << sum(a);

    return 0;
}
