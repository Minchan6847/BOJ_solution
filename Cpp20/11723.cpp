//
// Created by Minchan Kim on 2022/07/02.
//
// 2,032 KB, 780 ms
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int M;
    cin >> M;

    unordered_set<int> us, all;
    for (int i = 1; i <= 20; ++i)
        all.emplace(i);

    while (M--) {
        string cmd;
        cin >> cmd;

        int x;
        switch (cmd[0]) {
            case 'a':
                if (cmd[1] == 'd') {// add
                    cin >> x;
                    us.emplace(x);
                } else {// all
                    us = all;
                }
                break;
            case 'r':// remove
                cin >> x;
                us.erase(x);
                break;
            case 'c':// check
                cin >> x;
                cout << us.count(x) << '\n';
                break;
            case 't':// togle
                cin >> x;
                if (us.count(x))
                    us.erase(x);
                else
                    us.emplace(x);
                break;
            case 'e':// empty
                us.clear();
                break;
            default:
                break;
        }
    }

    return 0;
}

/*

// 제출번호: 45376237, ID: sonic6679
// 2,024 KB, 704 ms

 #define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <stack>
#include <queue>
#include <utility>
#include <cmath>

using namespace std;

vector<int> arr;
int BIT;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m;
	int n;
	string s;
	cin >> m;
	while (m--)
	{
		cin >> s;
		if (s == "add") {
			cin >> n;
			BIT |= (1 << n);
		}
		else if (s == "remove") {
			cin >> n;
			BIT &= ~(1 << n);
		}
		else if (s == "check") {
			cin >> n;
			if (BIT & (1 << n)) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (s == "toggle") {
			cin >> n;
			BIT ^= (1 << n);
		}
		else if (s == "all") {
			BIT = (1 << 21) - 1;
		}
		else if (s == "empty") {
			BIT = 0;
		}
	}




	return 0;
}
 */