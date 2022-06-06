//
// Created by Minchan Kim on 2022/05/12.
//
// prime no check + no square root
//------------ memory: 2020 KB, time: 28 ms ------------//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int division = 2;
    while (N > 1) {
        while (!(N % division)) {
            N /= division;
            cout << division << '\n';
        }
        division++;
    }

    return 0;
}

/*
//------------ memory: 2044 KB, time: 0 ms ------------//
// 제출번호: 43186567, ID: mnx
#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<unordered_map>
#include<algorithm>
#include<math.h>
#include<map>
#include<set>
#define INT 998244353
#define mp make_pair
using ll = long long;

using namespace std;

bool notPrime[10010];

void CalPrime(int n) {
	notPrime[1] = true;
	for (int i = 2; i <= n; i++) {
		if (!notPrime[i]) {
			for (int j = 2 * i; j <= n; j += i) {
				notPrime[j] = true;
			}
		}
	}
}

void soinsudec(int n) {
	if (n == 1) return;
	bool broken = false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (!notPrime[i] && !(n % i)) {
			cout << i << '\n';
			n /= i;
			broken = true;
			break;
		}
	}
	if(broken) soinsudec(n);
	else {
		cout << n;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	CalPrime(10000);
	soinsudec(n);
}
 */