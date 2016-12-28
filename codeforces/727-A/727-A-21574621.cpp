#include<bits/stdc++.h>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long a,b;
	cin>>a>>b;
	vector<long long> ve;

	while(true){
		ve.push_back(b);
		if(b==a){
			break;
		}
		if(b<a){
			cout<<"NO"<<endl;
			return 0;
		}
		if(b%10==1 || b%2==0){
			if(b%2==0){
				b = b/2;
			}else{
				b = (b - 1)/10;
			}
		}else{
			cout<<"NO"<<endl;
			return 0;
		}
	}

	cout<<"YES"<<endl;
	cout<<ve.size()<<endl;
	for(long long i=ve.size()-1;i>=0;i--){
		cout<<ve[i]<<" ";
	}
	cout<<endl;


	return 0;
}