//
// Created by Minchan Kim on 2022/06/19.
//
// 2,020 KB, 0 ms
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    cout << L - max(ceil(A / C), ceil(B / D));

    return 0;
}

/*
// 제출번호: 44704263, ID: dkrdj1215
// 2,020 KB, 0 ms
#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {
    int a, b, c, d, l;
    cin >> l >> a >> b >> c >> d;
    a = (a + c - 1) / c;
    b = (b + d - 1) / d;
    cout << l - max(a, b);
    return 0;
}
 */