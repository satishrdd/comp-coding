#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
 
 
using namespace std;
 
 
int main(int argc, char const *argv[])
{
	/* code */
	long long  cases;
	cin>>cases;
	string s;
	//std::vector<std::vector<long long> > vec;
	while(cases--){
		int flag=0;
		string check[26];
		int ar[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		cin>>s;
		long long n=s.length();
		if(n%2==0){
			if(s.substr(0,n/2)==s.substr(n/2,n/2)){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}else if(s.substr(0,(n-1)/2)==s.substr((n+1)/2,(n-1)/2)){
			if(n!=1)
			cout<<"YES\n";
			else{
				cout<<"NO\n";
			}
		}
		else{
			int flag =0;
			long long count =0;
			long long len = (n-1)/2;
			long long pos =  len+1;
			for(long long i=0;i<=len;i++){	
			       		if(count<2){
			       			if(s[i]!=s[pos]){
			       				count++;
			       			}
			       			else{
			       				pos++;
			       			}
			       		}
			       		else{
			       		 break;	
			       		}
			      }
			      pos =0;
		if(count==1){
			flag=1;
		}
		count=0;
		for(long long i=len;i<n;i++){	
			       		if(count<2){
			       			if(s[i]!=s[pos]){
			       				count++;
			       				
			       			}
			       			else{
			       				pos++;
			       			}
			       		}
			       		else{
			       		 break;	
			       		}
			       }
			     if(count==1)
			     	{flag=1;}
 
			    if(flag==0)
			    	{
			    		cout<<"NO"<<endl;
			    	}
				else
					{
						cout<<"YES\n";
					}
	}
	}
	return 0;
} 
