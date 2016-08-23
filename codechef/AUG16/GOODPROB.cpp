#include <bits/stdc++.h>
using namespace std;
 
#define maxn 100011
#define maxa 17000
#define ls (node<<1)
#define rs ((node<<1)+1)
#define sq 330
 
#define ii pair<int,int>
int Ar[maxn];
int N;
stack<pair<int,int>> st;
int dp1[sq][maxa], dp2[sq][maxa], dp3[sq][maxa], powof2[31];
int tblocks =0;
long long ans=0;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
 
struct nodes{
	int id,val;
	int child,lazy;
	void split(nodes &left,nodes &right){
		lazy=0;
	}
 
};
 
struct segment_tree{
	vector<nodes> tree;
	nodes identity;
	segment_tree(void){
        identity.val = identity.lazy = identity.child = -1;
        identity.id = -1;
        tree.resize(maxn * 4);
    }
 
    nodes Merge(nodes& left, nodes& right){
        nodes retur;
        if(left.val > right.val) {
        	retur.val = left.val;
        	retur.id = left.id;
        }
        else
        {
         retur.val = right.val;
        retur.id = right.id;
    	}   
         retur.lazy = 0;
        retur.child = left.child + right.child;
        return retur;
    }
 
 
    void build(int node, int start, int end){
        if(start == end){
            tree[node].val = Ar[start];
            tree[node].id = start;
            tree[node].child = 1;
            tree[node].lazy = 0;
            return;
        }
        int mid = (start+end)/2;
        build(ls, start, mid);
        build(rs, mid + 1, end);
        tree[node] = Merge(tree[ls], tree[rs]);
    }
     nodes query(int node, int start, int end, int left, int right){
        if(start > end or left > end or right < start) return identity;
        if(start >= left and end <= right) return tree[node];
        tree[node].split(tree[ls], tree[rs]);
        int mid = (start + end) / 2;
        nodes a, b, ret;
        a = query(ls, start, mid, left, right);
        b = query(rs, mid + 1, end, left, right);
        ret = Merge(a, b);
        return ret;
    }
 
};
 
segment_tree sgt;
 
int ceil(int x,int y){
	if((x%y)>0) 
		return ((x/y)+1);
	return x/y;
}
 
int wpoint(int id){
	return ceil(id,(int)sq);
}
 
int start_b(int id){
	 int a =  (((sq) * (id - 1)));
	 return a+1;
}
 
int end_b(int id){
	 return min(sq * id, N);
}
 
void Sk(int b, int len, int p);
void fun(int left, int right);
int T(int st, int ed, int node);
int main(int argc, char const *argv[])
{
	/* code */
     fast_io;
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>Ar[i];
	}
	powof2[0] = 1;
	for(int i = 1; i < 31; i++) 
		powof2[i] = powof2[i - 1] * 2;
	sgt.build(1, 1, N);
    tblocks = wpoint(N);
    for(int b = 1; b <= tblocks; b++){
        int start = start_b(b), end = end_b(b);
        for(int i = start; i <= end; i++){
            dp1[b][Ar[i]]++;
            dp2[b][Ar[i]]++;
            dp3[b][Ar[i]]++;
        }
        Sk(b, 13, 0);
    }
 
    st.push(pair<int,int>(1,N));
    while(!st.empty()){
        pair<int ,int> x = st.top();
        fun(x.first, x.second);
    }
    printf("%lld\n", ans);
	return 0;
}
 
 
 
int T(int st, int ed, int node){
    if(st > ed) return 0;
    int b1 = wpoint(st), b2 = wpoint(ed), ret = 0;
    if(b1 == b2){
        for(int i = st; i <= ed; i++){
            if((Ar[i] & node) == Ar[i] or (Ar[i] & node) == node) ret++; 
        }
    }else{
        
        int m = end_b(b1);
        for(int i = st; i <= m; i++){
            if((Ar[i] & node) == Ar[i] or (Ar[i] & node) == node) ret++; 
        }
        m = start_b(b2);
        for(int i = m; i <= ed; i++){
            if((Ar[i] & node) == Ar[i] or (Ar[i] & node) == node) ret++; 
        }
        for(int b = b1 + 1; b < b2; b++){
            ret += (dp1[b][node] + dp2[b][node] - dp3[b][node]);
        }
    }
    return ret;
}
 
 
void fun(int left, int right){
    st.pop();
    if(left > right) return;
    int id = sgt.query(1, 1, N, left, right).id;
    int d2 = right - id;
    int d1 = id - left;
    if(d1 <= d2){
        for(int i = left; i <= id; i++){
            ans += Ar[id] * 1LL * T(max(id, i + 1), right, Ar[i]);
        }
    }else{
        for(int i = id; i <= right; i++){
            ans += Ar[id] * 1LL * T(left, min(id, i - 1), Ar[i]);
        }
    }
    st.push(ii(left, id - 1));
    st.push(ii(id + 1, right));
}
 
 
 
 
void Sk(int b, int len, int p){
    if(len < 0) return;
    for(int mask = 0; mask < powof2[len]; mask++){
        dp2[b][p + mask] += dp2[b][p + mask + powof2[len]];
        dp1[b][p + mask + powof2[len]] += dp1[b][p + mask];
    }
    Sk(b, len - 1, p);
    Sk(b, len - 1, p + powof2[len]);
}
