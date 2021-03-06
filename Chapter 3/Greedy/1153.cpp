#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ldb;
typedef unsigned int ui;
typedef unsigned long ul;
 
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
 
typedef priority_queue<int> pq;
typedef priority_queue<int,vector<int>,greater<int>> pqg;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound


bool comp(pi a, pi b){
	if(a.s==b.s) return a.f<b.f;
	return a.s<b.s;
}

int main() {
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin>>t;

while(t--){
	int n;
	cin>>n;
	vpi v(n);
	for(int i=0; i<n; i++) cin>>v[i].f>>v[i].s;
	sort(v.begin(), v.end(), comp);	
	
	pq q;
	int time=0;
	for(auto x:v){
		time+=x.f;
		q.push(x.f);
		if(time>x.s){
			time-=q.top();
			q.pop();
		}
	}
	cout<<q.size()<<endl;
	if(t!=0) cout<<endl;
}

return 0;
}

