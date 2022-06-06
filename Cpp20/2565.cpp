//
// Created by Minchan Kim on 2022/05/26.
//
// 2,024 KB, 0 ms
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    set<int> index_of_A_s; // for sorting
    vector<int> v(501, 0); // v[i]의 value: A 전봇대의 i번 위치에 연결된 B 전봇대의 위치
    for (int i = 1; i <= N; ++i) {
        // 그냥 pair에 넣고 sorting해도 됨 --> N*log(N)
        int temp;
        cin >> temp;
        index_of_A_s.emplace(temp);
        cin >> v[temp];
    }

    vector<int> dp(N + 1, 0), index_of_A_v(N + 1, 0);

    int i = 1;
    for (const auto &elem: index_of_A_s) {
        index_of_A_v[i] = elem;
        i++;
    }

    dp[1] = 1;
    int max = 1;
    for (int j = 2; j <= N; ++j) {
        for (int k = 1; k < j; ++k) {
            // B 전봇대의 위치가 "k번째 줄 < j번째 줄" 이고 dp[k] > dp[j]이면
            if (v[index_of_A_v[k]] < v[index_of_A_v[j]] && dp[k] > dp[j])
                dp[j] = dp[k];
        }
        dp[j]++;
        if (max < dp[j])
            max = dp[j];
    }

    cout << N - max;

    return 0;
}

/*
// 2,028 KB, 0 ms
// 제출 번호: 43783356, ID: doradorav
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dp[501];
int main()
{
    int a,b;
    int num;
    cin>>num;
    int answer=0;
    vector <pair<int,int>> vp;
    for(int i=0;i<num;i++){
        cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    for(int i=0;i<num;i++){
        dp[i]=1;
        for(int m=0;m<i;m++){
            if(vp[i].second>vp[m].second){
                dp[i]=max(dp[i],dp[m]+1);
            }
        }
        answer=answer<dp[i]?dp[i]:answer;
    }
    cout<<num-answer;
    return 0;
}

 */