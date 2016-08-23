#include<iostream>

#include<cmath>

using namespace std;
long long gcd(long long a, long long b){ return (b==0)? a : gcd(b, a%b);}

int main(){
     long long n,k;
    while(true){
        cin>>n>>k;
        if(n==-1&&k==-1){
            break;
        }else if(k<=2)
            cout<<0<<endl;
         else{
            long long nn = (k-1)/2;
			long long p = nn*k - nn*(nn+1);
			long long q;
			if(n & 1) 
				 q = ((n-1)/2) * n;
			else
				 q = (n/2) * (n-1); 
			//cout << p << " "  << q << endl;
			while(true) {
				long long g = gcd(p,q);
				if(g == 1) break;
				p /= g;
				q /= g;
				if(p == 1 || q == 1) break;
			}
			if(q == 1) printf("%lld\n", p);
			printf("%lld/%lld\n",p,q);   
        }
    }
    return 0;
}