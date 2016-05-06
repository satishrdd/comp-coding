#include <iostream>
#include <string>
using namespace std;
int main()
{
int t;
cin>>t;
string s;
while(t--)
{
cin>>s;
int j=0;
while(s[j]=='0')
j++;
if(j==s.length())
s="0";
else s=s.substr(j,s.length());
int len=s.length();
int i=0;
int flag=1;
len--;
while(i<len-1)
{
if(s[i]<s[len])
flag=1;
else if(s[i]>s[len])flag=0;
s[len]=s[i];
i++;
len--;
}
if(flag&&s[i]==s[len])
flag=1;
else if(s[i]<s[len])
flag=1;
else flag=0;
if(flag)
s[i]=s[len]=s[i]+1;
else s[len]=s[i];
int end=s.length();
i=(end-1)/2;
j=(end)/2;
while(i>0)
{
if(s[i]==':'&&s[j]==':')
{
s[i]=s[j]='0';
i--;
j++;
s[i]=s[j]=s[i]+1;
}
else break;
}
if(i==0&&s[i]==':')
{
cout<<"1";
for(int k=0;k<end-1;k++)
cout<<"0";
cout<<"1\n";
}
else
{
cout<<s<<endl;	
}
}
} 