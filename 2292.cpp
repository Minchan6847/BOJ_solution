//
// Created by Minchan Kim on 2022/05/11.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int answer = 0;
    int temp = 1;
    if (N > 1) {
        while (true) {
            temp += 6 * answer;
            if ((N - temp - 1) / (6 * ++answer) == 0)
                break;
        }
    }

    cout << answer + 1;

    return 0;
}
/*
//ID: kwt9568, 제출번호: 43142572
#include<iostream>
using namespace std;
int main(void)
{
	//벌집
	int findnum;
	cin >> findnum;
	int count = 1;
	int i = 1;
	while (findnum >i)
	{
		i += (6 * count);
		count++;
	}
	cout << count;
}
 */