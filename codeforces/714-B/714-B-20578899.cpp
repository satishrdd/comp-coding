#include<bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	set<long> s;
	long n,temp;
	vector<long> ve;
	cin>>n;
	for(long i=0;i<n;i++){
		cin>>temp;
		s.insert(temp);
	}
	
	if(s.size()<3){
		cout<<"YES"<<endl;
	}else if(s.size()==3){
		set<long>::iterator iter ;
		for(iter=s.begin();iter!=s.end();iter++)
		{
    	ve.push_back(*iter);
		}
		sort(ve.begin(),ve.end());
		
		if((ve[1]-ve[0])==(ve[2]-ve[1])){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}