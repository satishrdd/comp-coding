#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s;
    int a;
        while(true){
            cin>>s>>a;
            if(s=="."){
                break;
            }else{
                int j = s.length();
                int len = j*a;
                for(int i = 0;i<j;i++){
                    string out = s.substr(i,j);
                    while(out.length()<len){
                        out = out + s;
                    }
                    cout<<out.substr(0,len)<<endl;
                }
            }
        }
        return 0;
}