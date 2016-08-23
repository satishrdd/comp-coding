#include<iostream>
#include<string.h>
#include<cstring>
#include<locale>

using namespace std;
int main(){

locale lo;
int n,m,a=0,i,cases;
string s;
cin>>s;
for(i=0;i<s.length();i++){
s[i]=tolower(s[i],lo);

if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){;}
else
cout<<"."<<s[i];

}

return 0;
}