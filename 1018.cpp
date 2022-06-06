//
// Created by Minchan Kim on 2022/05/14.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[50][50] = {0,};

    int N = 0, M = 0;
    cin >> N >> M;

    int min = 100;

    char temp = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> temp;
            if (temp == 'B')
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }
    }
    int correct_chessboard[8][8] = {0,};
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j)
            correct_chessboard[i][j] = i % 2 ^ j % 2;

    int cnt = 0;
    for (int start_r = 0; start_r <= N - 8; ++start_r) {
        for (int start_c = 0; start_c <= M - 8; ++start_c) {
            cnt = 0;
            for (int i = 0; i < 8; ++i) {
                for (int j = 0; j < 8; ++j) {
                    if (arr[start_r + i][start_c + j] != correct_chessboard[i][j])
                        cnt++;
                }
            }
            if (cnt < min)
                min = cnt;
            if (64 - cnt < min)
                min = 64 - cnt;
        }
    }

    cout << min;

    return 0;
}

/*
// 제출번호: 43286854, ID: hwsaakh
// memory: 2020 KB, time: 0 ms
#include <iostream>

using namespace std;

int main(){
    int row, col;
    int min = 65;
    char board[50][50];

    cin >> row >> col;

    for(int i = 0; i < row; i++)
        cin >> board[i];

    row -= 7;
    col -= 7;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            int temp = 0;
            for(int t_i = i; t_i < i+8; t_i++){
                for(int t_j = j; t_j < j+8; t_j++){
                    temp += (t_i + t_j) % 2 ^ board[t_i][t_j] == 'B';
                }
            }
            temp = temp > 32 ? 64 - temp : temp;
            min = min > temp ? temp : min;
        }
    }

    cout << min;
    return 0;
}
 */