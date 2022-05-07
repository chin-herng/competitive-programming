#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define debug cout << "hi" << endl

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF32 = 1<<30;
const ll INF64 = 1LL<<60;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen(".in.txt", "r", stdin);
	freopen(".out.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int h, w, mini = 101, ans = 0; cin >> h >> w;
	vector<vector<int>> grid(h, vector<int> (w));
	for(int i = 0; i < h; i++) for(int j = 0; j < w; j++)
	{
		cin >> grid[i][j];
		mini = min(mini, grid[i][j]);
	}
	for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) ans += grid[i][j] - mini;
	cout << ans;

	return 0;
}