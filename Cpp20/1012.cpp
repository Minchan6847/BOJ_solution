//
// Created by Minchan Kim on 2022/07/06.
//
// 2,452 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

void
dfs(const int &r, const int &c, const vector<vector<int>> &v, vector<vector<bool>> &visit, const int &N, const int &M) {
    visit[r][c] = true;
    for (int i = -1; i <= 1; i += 2)
        if (c + i >= 0 && c + i < M)
            if (v[r][c + i] && !visit[r][c + i])
                dfs(r, c + i, v, visit, N, M);
    for (int i = -1; i <= 1; i += 2)
        if (r + i >= 0 && r + i < N)
            if (v[r + i][c] && !visit[r + i][c])
                dfs(r + i, c, v, visit, N, M);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int M, N, K;
        cin >> M >> N >> K;

        vector<vector<int>> v(N, vector<int>(M, 0));
        vector<vector<bool>> visit(N, vector<bool>(M, false));

        while (K--) {
            int X, Y;
            cin >> X >> Y;
            v[Y][X] = 1;
        }

        int res = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (v[i][j] && !visit[i][j]) {
                    res++;
                    dfs(i, j, v, visit, N, M);
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}

/*
// 제출번호: 45570826, ID: rujang
// 	1,124 KB, 0 ms

#include <stdio.h>
#include <memory.h>

int arr[55][55]={0};
int xx[4] = {0,0,-1,1};
int yy[4] = {1,-1,0,0};
int t,m,n,k;
int a,b;
int ans;

void dfs(int x,int y){
    for(int i=0;i<4;i++){
        int X = x+xx[i];
        int Y = y+yy[i];

        if(X>=0 && X<n && Y>=0 && Y<m && arr[X][Y]==1){
            arr[X][Y] = 0;
            dfs(X,Y);
        }
    }

    return;
}

int main(){
    scanf("%d",&t);

    while(t--){
        ans = 0;

        scanf("%d %d %d",&m,&n,&k);

        for(int i=0;i<n;i++)
            memset(arr[i],0,m*sizeof(int));

        for(int i=0;i<k;i++){
            scanf("%d %d",&a,&b);
            arr[b][a] = 1;
        }

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(arr[i][j]==1){
                    dfs(i,j);
                    ans++;
                }

        printf("%d\n",ans);
    }

    return 0;
}

 */