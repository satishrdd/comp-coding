#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
#include <sstream>

template <typename T>
  string NumberToString ( T Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }

int main(int argc, char const *argv[])
{
	/* code */
	std::map <std::pair<long long,long long>,string> list;
	long long cases,a,b;
	string s;
	cin>>cases;
	while(cases--){
		cin>>a>>b>>s;
		
		list[std::make_pair(a,b)] = s;
	}
	long long t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		
		cout<<list[std::make_pair(a,b)]<<endl;
	}
	return 0;	
}