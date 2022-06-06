//
// Created by Minchan Kim on 2022/05/08.
//
//              auto& --> 20ms / int& --> 16ms            //
#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a) {
    long long ans = 0;
    //for (const auto &elem: a)
    for (const int &elem: a)
        ans += elem;
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
