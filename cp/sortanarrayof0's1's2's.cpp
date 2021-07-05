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
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int low = 0, mid = 0, high = n - 1;
	//After Sorting Array Contains
	//0 from 0 to low-1 contains 0's
	//2 from high+1 to n-1
	//1 from low to mid-1
	while (mid <= high)
	{
		int x = a[mid];
		switch (x) {
		case 0:
			swap(a[low++], a[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(a[mid], a[high--]);
			break;
		}
	}
	for (auto x : a)
	{
		cout << x << " ";
	}
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