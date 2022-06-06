//
// Created by Minchan Kim on 2022/05/11.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X = 0;
    cin >> X;

    int temp = 0;
    int cnt = 0;
    while (temp < X) {
        temp += ++cnt;
    }

    if (cnt % 2)
        cout << temp + 1 - X << "/" << X - temp + cnt;
        //cout << cnt + 1 - (X - (temp - cnt)) << "/" << X - (temp - cnt);
    else
        cout << X - temp + cnt << "/" << temp + 1 - X;
        //cout << X - (temp - cnt) << "/" << cnt + 1 - (X - (temp - cnt));

    return 0;
}
/*
// ID: end1300, 제출번호: 43130269
#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	int i = 1;
	for (; i < N; i++)
	{
		N -= i;
	}

	if (i % 2 == 1)
	{
		std::cout << i + 1 - N << '/' << N << '\n';
	}
	else
	{
		std::cout << N << '/' << i + 1 - N << '\n';
	}
}
 */