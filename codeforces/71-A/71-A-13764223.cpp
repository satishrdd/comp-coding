#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;
int main(){


int n,m,a=0,i,cases;
string s;
cin>>cases;
while(cases--){
cin>>s;
if(s.length()<=10)
cout<<s<<endl;
else
cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;

}

return 0;
}