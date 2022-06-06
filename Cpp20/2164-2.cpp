//
// Created by Minchan Kim on 2022/06/06.
//
// 2,208 KB, 0 ms
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1)
        cout << 1;
    else
        cout << 2 * static_cast<int>(N - pow(2, static_cast<int>(log2(N - 1))));

    return 0;
}

/*
// 나: O(1)
// 이 풀이: O(logN)
//
// 제출 번호: 17601218, ID: cozyyg
// 1,112 KB, 0 ms
#include <cstdio>
int main(){
    int n,p;
    scanf("%d",&n);
    for(p=1;p<n;p*=2);
    printf("%d",n==1?1:(n-p/2)*2);
}

 */

/*
    // debugging
    for (int N = 1; N <= 100; ++N) {
        if (N == 1)
            cout << 1;
        else
            cout << 2 * static_cast<int>(N - pow(2, static_cast<int>(log2(N - 1))));
        cout << '\n';
    }
     */


/*
// 규칙 찾기
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int N = 1; N <= 100; ++N) {
        queue<int> q;
        for (int i = 1; i <= N; ++i)
            q.emplace(i);

        while (q.size() > 2) {
            q.pop();
            q.emplace(q.front());
            q.pop();
        }

        cout << q.back() << '\n';
    }

    return 0;
}
*/
