/*****************************************************************************************/
/*                                                                                          */
/*                      Satish Reddy Yerva                                                      */
/*                                                                                          */
/*****************************************************************************************/
 
#include <bits/stdc++.h>



 
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
   long long n,m;
   cin>>n>>m;
   long long res = min(m,n)+1;
   cout<<res<<endl;
   for(int i=0;i<res;i++){
    cout<<i<<" "<<res-i-1<<endl;
   }
   

    return 0;
}