#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int cases;
    int n,k;
    cin>>cases;
    while(cases--){
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int ans = ar[k - 1] - ar[0];
        
        for(int i = 1;i + k - 1 < n;++i)
            ans = min(ans,ar[i + k - 1] - ar[i]);
        
        printf("%d\n",ans);
    }
    return 0;
} 