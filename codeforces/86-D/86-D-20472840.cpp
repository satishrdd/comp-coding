#include<bits/stdc++.h>

using namespace std;
int blk_size;
int cnt[1000005] = {0};
int Lft,Rft;
int n,t;
pair<pair<int,int>,int> p[200005];
long long cur_ans=0;


inline bool cmp(const pair<pair<int,int>,int>&p1,const pair<pair<int,int> ,int>&p2){
	if(p1.first.first/blk_size!=p2.first.first/blk_size){
		return p1.first.first<p2.first.first;
	}
	return p1.first.second<p2.first.second;
}


int main(){
	cin>>n>>t;
	int temp1,temp2;
	blk_size = sqrt(n);
	long long ans[t];
	long long ar[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&ar[i]);
	}
	for(int i=0;i<t;i++){
		scanf("%d%d",&temp1,&temp2);
		cnt[i] =0;
		p[i] = (make_pair(make_pair(temp1-1,temp2-1),i));
	}

	sort(p,p+t,cmp);
	Lft =0;
	Rft = -1;
	for(int i=0;i<t;i++){
		int l = p[i].first.first;
		int r = p[i].first.second;
		int id= p[i].second;
		while(Rft<r){
			++Rft;

			cur_ans = cur_ans + 2*(1LL*ar[Rft])*cnt[(1LL*ar[Rft])]+(1LL*ar[Rft]) ;
			cnt[ar[Rft]]++;
			 
		}
		while(Rft>r){
			cur_ans = cur_ans - 2*(1LL*ar[Rft])*cnt[(1LL*ar[Rft])]+(1LL*ar[Rft]) ;
			cnt[ar[Rft]]--;
			--Rft;
		}
		while(Lft<l){
			cur_ans = cur_ans - 2*(1LL*ar[Lft])*cnt[(1LL*ar[Lft])]+(1LL*ar[Lft]) ;
			cnt[ar[Lft]]--;
			++Lft;
		}
		while(Lft>l){
			--Lft;
			cur_ans = cur_ans + 2*(1LL*ar[Lft])*cnt[(1LL*ar[Lft])]+(1LL*ar[Lft]) ;
			cnt[ar[Lft]]++;
		}
		ans[id] = cur_ans;

	}
for(int i=0;i<t;i++){
	printf("%I64lld\n",ans[i]);
}
	return 0;
}