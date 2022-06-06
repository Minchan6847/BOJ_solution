//
// Created by Minchan Kim on 2022/05/16.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Member {
public:
    int age;
    string name;

    bool operator<(const Member &other) const {
        return this->age < other.age;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;
    vector<Member> v(N);

    for (int i = 0; i < N; ++i)
        cin >> v[i].age >> v[i].name;

    stable_sort(v.begin(), v.end());

    for (const auto &elem: v)
        cout << elem.age << ' ' << elem.name << '\n';

    return 0;
}
