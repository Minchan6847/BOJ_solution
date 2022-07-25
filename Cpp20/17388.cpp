//
// Created by Minchan Kim on 2022/07/25.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int S, K, H, sum;
    cin >> S >> K >> H;

    sum = S + K + H;

    if (sum >= 100)
        cout << "OK";
    else {
        int min_n = min(S, min(K, H));
        if (min_n == S)
            cout << "Soongsil";
        else if (min_n == K)
            cout << "Korea";
        else
            cout << "Hanyang";
    }

    return 0;
}

/*
// 제출 번호: 46590555, ID: cysyes0403
// 2,020 KB, 0 ms

#include<iostream>

using namespace std;

int main()
{
	int S, K, H;
	cin >> S >> K >> H;
	if (S + K + H >= 100)
		cout << "OK";
	else {
		if (S < K && S < H)
			cout << "Soongsil";
		else if (K < S && K < H)
			cout << "Korea";
		else
			cout << "Hanyang";
	}
	return 0;
}
 */
