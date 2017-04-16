#include <bits/stdc++.h>
using namespace std;




int main()
{
    string s;
    int cases;
    cin>>cases;
    int ar[6]={1,2,3,4,6,12};
    vector<int> ve;
    while(cases--){
        cin>>s;
        for(int i=0;i<6;i++){
            int a = ar[i];
            int flag=0;
            for(int j=0;j<a;j++){
                flag=0;
                for(int k=j;k<12;k=k+a){
                    if(s[k]=='O'){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                   ve.push_back(12/a);
                    break;
                }
            }
        }
        cout<<ve.size()<<" ";
        for(int i=ve.size()-1;i>=0;i--){
            cout<<ve[i]<<"x"<<12/ve[i]<<" ";
        }
        cout<<endl;
        ve.clear();
    }
    return 0;
}