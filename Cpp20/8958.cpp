//
// Created by Minchan Kim on 2022/05/07.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;
    cin >> T;
    string input("");
    int final_score = 0, score = 0;
    for (int i = 0; i < T; ++i) {
        cin >> input;
        for (int j = 0; j < input.size(); ++j) {
            if (input.at(j) == 'O')
                final_score += ++score;
            else
                score = 0;
        }
        cout << final_score << "\n";
        final_score = 0;
        score = 0;
    }

    return 0;
}
