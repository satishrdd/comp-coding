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
    long long ar[n];
    vector<long long> vi;
    for(long long i=0;i<n;i++){
        cin>>ar[i];
    }

    sort(ar,ar+n);
    
    long long i=0;
    long long j=1;
    while(m>0){
        if(ar[i]==j){
            j++;
            i++;
        }else{
            vi.push_back(j);
            m-=j;
            j++;
            if(m<0){
                vi.pop_back();
            }
        }
    }
    cout<<vi.size()<<endl;
    for(long long i=0;i<vi.size();i++){
        cout<<vi[i]<<" ";
    }
    cout<<endl;

    return 0;
}