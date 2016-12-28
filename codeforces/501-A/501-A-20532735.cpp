/*****************************************************************************************/
/*                                                                                          */
/*                      Satish Reddy Yerva                                                      */
/*                                                                                          */
/*****************************************************************************************/
 
#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cmath>
#include<vector>



 
/* Input output defines. */
#define sd(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define slf(n) scanf("%lf", &n) 
#define pd(n) printf("%d", n);
#define pl(n) printf("%lld", n);
#define plf(n) printf("%0.9lf", n);
#define ps printf(" ")
#define pe printf("\n")

/* loops */


using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)

using namespace std;





bool prime(long long n){
    
    return true;
}



int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int misha = max(3*a/10,a-((a/250)*c));
    int vasya = max(3*b/10,b-((b/250)*d));
    if(misha>vasya){
        cout<<"Misha"<<endl;
    }else if(vasya>misha){
        cout<<"Vasya"<<endl;
    }else{
        cout<<"Tie"<<endl;
    }

    return 0;
}