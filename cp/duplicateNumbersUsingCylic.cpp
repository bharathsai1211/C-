#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> ve;
typedef pair<int, int> pa;
template <typename T> T gcd(T a, T b) {return b ? gcd(b, a % b) : a;}
void solve()
{
	int n;
	cin >> n;
	ve ve;
	for (int i = 0; i < n; i++)
	{
		int y;
		cin >> y;
		ve.push_back(y);
	}
	int slow = ve[0];
	int fast = ve[0];
	do
	{
		slow = ve[slow];
		fast = ve[ve[fast]];
	}
	while (slow != fast);
	fast = ve[0];
	while (slow != fast)
	{
		slow = ve[slow];
		fast = ve[fast];
	}
	cout << slow;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}