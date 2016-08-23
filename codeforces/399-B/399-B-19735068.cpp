#include<iostream>
#include<cmath>

using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    string s;
    cin>>n;
    cin>>s;
    long long res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='B'){
            res+=pow(2,i);
        }
    }
    cout<<res<<endl;
    return 0;
}