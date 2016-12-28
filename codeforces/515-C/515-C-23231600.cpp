#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long long res=0,i=0,n,m;
	vector<int> vec;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='0'||s[i]=='1'){
			;
		}else if(s[i]=='2'){
			vec.push_back(2);
		}else if(s[i]=='3'){
			vec.push_back(3);
		}else if(s[i]=='4'){
			vec.push_back(3);
			vec.push_back(2);
			vec.push_back(2);
		}else if(s[i]=='5'){
			vec.push_back(5);

		}else if(s[i]=='6'){
			vec.push_back(5);
			vec.push_back(3);
		}else if(s[i]=='7'){
			vec.push_back(7);
		}else if(s[i]=='8'){
			vec.push_back(7);
			vec.push_back(2);
			vec.push_back(2);
			vec.push_back(2);
		}else if(s[i]=='9'){
			vec.push_back(7);
			vec.push_back(3);
			vec.push_back(3);
			vec.push_back(2);
		}
	}

	sort(vec.begin(),vec.end());
	for(int i=vec.size()-1;i>=0;i--){
		cout<<vec[i];
	}
	cout<<endl;
	return 0;
}