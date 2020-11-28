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
		bool vis[(int)s.size()+1];
		memset(vis, 1, sizeof(vis));
		string ns;
		for(int i=0; i<(int)s.size(); ++i) {
			int cnt=1;
			for(int j=i+1; j<(int)s.size()&&s[j]==s[i]; ++j) {
				cnt++;
				vis[j]=0;
			}
			if(vis[i]) {
				string tmp=to_string(cnt);
				ns+=s[i];
				ns+=tmp;
			}
		}
		cout << ((int)ns.size()<(int)s.size()?"YES":"NO") << "\n";
	}
}
