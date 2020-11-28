#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int cnt=0;
		for(int i=0; i<(int)s.size();) {
			int j=0, tmp=0;
			for(j=i; j<(int)s.size()&&s[j]==s[i]; ++j)
				++tmp;
			while(tmp>0) {
				cnt++;
				tmp/=10;
			}
			cnt++;
			i=j;
		}
		cout << (cnt<(int)s.size()?"YES":"NO") << "\n";
	}
}
