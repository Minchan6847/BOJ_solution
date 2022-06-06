//
// Created by Minchan Kim on 2022/05/22.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>
#include <vector>

using namespace std;
// v[N][2]이 1이면, fibonacci(N)의 0과 1의 출력 횟수는 구해져 있는 상태
void fibonacci(const int &N, vector<vector<int>> &v) {
    if (!v[N][2]) {
        fibonacci(N - 2, v);
        v[N][0] = v[N - 2][0];
        v[N][1] = v[N - 2][1];

        fibonacci(N - 1, v);
        v[N][0] += v[N - 1][0];
        v[N][1] += v[N - 1][1];

        v[N][2] = 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    vector<vector<int>> v(41, vector<int>(3, 0));

    v[0][0] = 1;
    v[0][2] = 1;

    v[1][1] = 1;
    v[1][2] = 1;

    fibonacci(40, v);

    while (T--) {
        int N;
        cin >> N;
        cout << v[N][0] << ' ' << v[N][1] << '\n';
    }

    return 0;
}

/*
제출 번호: 43623608, ID: kujmmy
// memory: 1112 KB, time: 0 ms
#include<stdio.h>
int main(){
    int T, N, i = 0;
    int p[41] = {0, 1, 1};
    for (i = 3; i < 41; i++) p[i] = p[i-1] + p[i-2];
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
    scanf("%d", &N);
    if(N == 0)
        printf("%d %d\n", 1, 0);
    else if (N == 1)
        printf("%d %d\n", 0, 1);
    else
        printf("%d %d\n", p[N-1], p[N]);
    }
}
 */