#include<bits/stdc++.h>


typedef long long ll;


using namespace std;

ll x[100001],y[100001];

ll slp(int i,int j,int k){
	ll temp1 = x[j]-x[i];
	ll temp2 = y[j]-y[i];
	ll temp3 = x[k] - x[i];
	ll temp4 = y[k] - y[i];

	return (temp4*temp1 - temp3*temp2);
}


int main(int argc, char const *argv[])
{
	/* code */
	int n;
	ll temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	ll a=0,b=1,c;
	for(int i=2;i<n;i++){
		if(slp(a,b,i)!=0){
			c=i;
			temp = c;
			break;
		}
	}

	if(slp(a,b,c)<0){
		swap(b,c);
	}
	for(int i=2;i<n;i++){
		if(i!=temp){
			if(slp(a,b,i)>=0 && slp(b,c,i)>=0 && slp(c,a,i)>=0){
				if(slp(a,b,i)!=0){
					c=i;
				}else if(slp(b,c,i)!=0){
					a=i;
				}else if(slp(c,a,i)!=0){
					b=i;
				}
			}
		}
	}
	a++;
	b++;
	c++;
	cout<<a<<" "<<b<<" "<<c<<endl;

	return 0;
}