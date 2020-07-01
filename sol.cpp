#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, m;
	cin >> n >> m;
	int l[100], r[100];
	for(int i = 0; i < n; ++i) {
		cin >> l[i] >> r[i];
	}
	sort(l, l + n);
	sort(r, r + n);
	int a[100] = {0}, cnt = 0;
	for(int i = 1; i <= m; ++i) {
		bool ok = false;
		for(int j = 0; j < n; ++j) {
			for(int k = l[j]; k <= r[j]; ++k) {
				if(i == k) {
					ok = true;
				}
			}
		}
		if(!ok) {
			a[cnt] = i;
			cnt++;
		}
	}
	cout << cnt << "\n";
	for(int i = 0; i < cnt; ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
}
