#include<bits/stdc++.h>


using namespace std;


#define SIZE 100


inline bool cmp(pair<int,int> &p1,pair<int,int> &p2){
	if(p1.second <= p2.second){
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	/* code */
	
	string s;
	cin>>s;
	string l;
	int count=0;
	while(s.size()!=1){
		long long temp =0;
		for(int i=0;i<s.size();i++){
			temp  = temp + (long long)( s[i]-'0');
		}
		s = to_string(temp);
		count++;
	}
	cout<<count<<endl;
	
	return 0;
}