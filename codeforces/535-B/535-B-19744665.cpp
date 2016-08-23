#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
   
    string s;
    cin>>s;
    int j=1;
    long long res=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='4'){
            res = res+ pow(2,j-1);
        }else{
            res = res+ pow(2,j);
        }
        j++;
    }
    cout<<res<<endl;
    return 0;
}