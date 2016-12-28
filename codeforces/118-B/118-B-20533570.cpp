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
#include<algorithm>



 
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
 int n;
 cin>>n;
 int ar[2*n+1][2*n+1];
 for(int i=0;i<n;i++){
    ar[n][i] = i;
 }
 ar[n][n] = n;
 for(int i=n+1;i<2*n+1;i++){
    ar[n][i] = ar[n][i-1]-1;
 }

 int m =n;
 for(int j=1;j<=m;j++){
    for(int i=0;i<2*n+1;i++){
        ar[n+j][i] = ar[n+j-1][i]-1;
        ar[n-j][i] = ar[n-j+1][i]-1;
    }
 }

int flag=0;
for(int i=0;i<2*n+1;i++){
    flag=0;
    for(int j=0;j<2*n+1;j++){
        if(ar[i][j]>=0){
            if(ar[i][j+1]>=0)
        cout<<ar[i][j]<<" ";
            else{
                cout<<ar[i][j];
            }
    flag=1;}
    else{
        if(flag==0)
            cout<<"  ";
    }
    }
    cout<<endl;
}



    return 0;
}