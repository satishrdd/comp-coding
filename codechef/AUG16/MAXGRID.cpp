#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
#define ll long long
	
#define MN 200110
#define ls (node<<1)
#define rs ((node<<1)+1)
#define pii pair<long long,long long>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
const long long sz = 100000;
 
long long N, L;
 
ll S;
 
vector<pii> st[MN];
 
bool pre[MN];
 
 
struct nsa{
	ll val, lval;
	long long child, lz;
	void split(nsa &left, nsa &right){
		if(lz==1){
			left.lval += lval; right.lval += lval;
			left.lz = right.lz = 1;
			left.val += lval; right.val += lval; 
		}else{
			;
		}
		lz = 0;
		lval = 0;
	}
};
 
struct STree{
 
	vector<nsa> tree;
 
	nsa iden;
 
	STree(void){
		iden.val = iden.lval = 0;
		iden.lz = iden.child = 0;
		tree.resize(MN * 4);
	}
 
	nsa merge(nsa& l, nsa& r){
		nsa ret;
		ret.val = max(l.val, r.val);
		ret.lval = 0;
		ret.lz = 0;
		ret.child = l.child + r.child;
		return ret;
	}
 
	void build(long long node, long long start, long long end){
		if(start != end){
			;
		}else{
			tree[node].val = 0;
			tree[node].lval = 0;
			tree[node].child = 1;
			tree[node].lz = 0;
			return;
		}
		long long mid = (start + end) / 2;
		build(ls, start, mid);
		build(rs, mid + 1, end);
		tree[node] = merge(tree[ls], tree[rs]);
	}
 
	void update(long long node, long long start, long long end, long long left, long long right, ll val){
		if(start > end or left > end or right < start)return;
		if(start >= left and end <= right){
			tree[node].val += val;
			tree[node].lval += val;
			tree[node].lz = 1;
			return;
		}
		tree[node].split(tree[ls], tree[rs]);
		long long mid = (start + end) / 2;
		update(ls, start, mid, left, right, val);
		update(rs, mid + 1, end, left, right, val);
		tree[node] = merge(tree[ls], tree[rs]);
	}
 
	nsa query(long long node, long long start, long long end, long long left, long long right){
		if(start > end or left > end or right < start) return iden;
		if(start >= left and end <= right) return tree[node];
		tree[node].split(tree[ls], tree[rs]);
		long long mid = (start + end) / 2;
		nsa a, b, ret;
		a = query(ls, start, mid, left, right);
		b = query(rs, mid + 1,end, left, right);
		ret = merge(a, b);
		return ret;
	}
 
};
 
STree P;
 
 
 
 
 
 
void arow(long long r, long long l,long long flag){
	if(flag==1){
	if(pre[r] or r <= 0 or r > sz) return;
	pre[r] = true;
	for(long long i = 0; i < st[r].size(); i++){
		long long c = st[r][i].first, v = st[r][i].second;
		P.update(1, 1, sz, max(1LL, c - l + 1), c, v);
	}}else{
		if(!pre[r] or r <= 0 or r > sz) return;
	pre[r] = false;
	for(long long i = 0; i < st[r].size(); i++){
		long long c = st[r][i].first, v = st[r][i].second;
		P.update(1, 1, sz, max(1LL, c - l + 1), c, -v);
	}
	}
}
 
 
 
 
ll solve(long long l){
	ll ret = 0;
	for(long long r = 1; r <= sz; r++){
		arow(r, l,1);
		arow(r - l, l,0);
		ret = max(ret, P.query(1, 1, sz,  1, sz).val);
	}
	for(long long r = 1; r <= sz; r++){
		arow(r, l,0);
	}
	return ret;
}
 
long long recur(long long s, long long e){
	if(s > e) return s;
	long long m = (s + e) / 2;
	if(solve(m) == S) return recur(s, m - 1);
	else return  recur(m + 1, e);
}
 
 
 
 
 
 
int main()
{	
	fast_io;
	cin>>N>>L;
	for(long long i = 1; i <= N; i++){
		long long a, b, c;
		cin>>a>>b>>c;
		st[a].push_back(pii(b, c));
	}
	P.build(1, 1, sz);
	for(long long i = 1; i <= sz; i++){
		sort(st[i].begin(), st[i].end());
	}
	S = solve(L);
	long long ans = recur(1, L);
	cout << S << " " << ans << endl;
    return 0;
} 
