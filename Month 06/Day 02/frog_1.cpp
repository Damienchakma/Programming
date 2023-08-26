#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int h[N];
int n;
int dp[N];

int solve(int cur) {
    if (cur == n) return 0;

    if (dp[cur] != -1) return dp[cur];

    int ret1 = INT_MAX, ret2 = INT_MAX;

    if (cur + 1 <= n) ret1 = abs(h[cur] - h[cur + 1]) + solve(cur + 1);
    if (cur + 2 <= n) ret2 = abs(h[cur] - h[cur + 2]) + solve(cur + 2);

    dp[cur] = min(ret1, ret2);

    return dp[cur];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    cout << solve(1) << "\n";
}