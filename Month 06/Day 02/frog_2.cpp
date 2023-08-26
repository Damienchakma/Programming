#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int h[N];
int n, k;
int dp[N];

int solve(int cur) {
    if (cur == n) return 0;

    if (dp[cur] != -1) return dp[cur];

    int ret = INT_MAX;

    for (int i = 1; i <= k; i++) {
        if (cur + i <= n) {
            ret = min(ret, abs(h[cur] - h[cur + i]) + solve(cur + i));
        }
    }

    return dp[cur] = ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));
    
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    cout << solve(1) << "\n";
}