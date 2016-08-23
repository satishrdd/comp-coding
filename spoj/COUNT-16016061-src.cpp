#include<stdio.h>
#include<iostream>
#include<cstring>

const int MAX = 5005;
int mem[MAX][MAX];

using namespace std;

long f(long c,long t){
  
    
    if(mem[c][t]) return mem[c][t] - 1;
	if(t==1) return 1;
	int i, ret = 0;
	for(i=c/t; i>=0; i--) {
		ret += f(c-i*t, t-1);
		if(ret >= 1988) ret %= 1988;
	}
	return (mem[c][t] = 1 + ret) - 1;
}

int main()
{
    string s;
    long a,b;
        while(true){
         cin>>a>>b;
            if(a==0&&b==0){
                break;
            }else{
                cout<<f(a-b,b)<<endl;
            }
        }
        return 0;
}