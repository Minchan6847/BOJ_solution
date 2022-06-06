//
// Created by Minchan Kim on 2022/05/05.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int dice1, dice2, dice3;
    cin >> dice1 >> dice2 >> dice3;

    if(dice1 == dice2 && dice2 == dice3)
        cout << 10000 + dice1 * 1000;
    else if (dice1 == dice2 || dice2 == dice3)
        cout << 1000 + dice2 * 100;
    else if (dice3 == dice1)
        cout << 1000 + dice1 * 100;
    else
        cout << ((dice1 > dice2) ? (dice1 > dice3 ? dice1*100 : dice3*100):(dice2 > dice3 ? dice2*100 : dice3*100));

    return 0;
}
