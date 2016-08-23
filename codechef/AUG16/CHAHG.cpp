 
#include <bits/stdc++.h>
 
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
 
 
bool Iszag(long long int a[],long long int n)
{
    int i,j,flag = 0;
    if(a[0]-a[1] > 0)
    {
        flag = 1;
    }
    if(a[0] == a[1])
        return false;
    for(i=1;i<n-1;i++)
    {
        if(flag == 1)
        {
            if(a[i+1] > a[i])
                flag = 0;
            else
                return false;
        }
        else if(flag == 0)
        {
            if(a[i+1] < a[i])
                flag = 1;
            else
                return false;
        }
    }
    return true;
}
 
 
 
 
int main() 
{
    long long  cases,n,h[11],m[11],temp[11];
    long long i,j;
     std::set<int> timearray;
    std::vector<int> start,end;
   
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>h[i];
            cin>>m[i];
        }
        start.clear();
        end.clear();
        timearray.clear();
        int flag = 0;
        int timearrayer = 0;
       
        if(n == 1)
        {
            cout<<1<<endl<<"0 Inf"<<endl;
            continue;
        }
         if(Iszag(h,n))
        {
            timearray.insert(0);
            flag = 1;
        }
        for(i=0;i<n-1;i++)
        {
            if(m[i] != m[i+1])
            {
                if((h[i]-h[i+1])%(m[i+1]-m[i]) == 0 && (h[i]-h[i+1])/(m[i+1]-m[i]) >= 0)
                {
                    timearray.insert((h[i]-h[i+1])/(m[i+1]-m[i]));
                    timearray.insert((h[i]-h[i+1])/(m[i+1]-m[i])+1);
                }
                else
                {
                    if((h[i]-h[i+1])/(m[i+1]-m[i]) == 0)
                    {
                        timearray.insert((h[i]-h[i+1])/(m[i+1]-m[i]));
                    }
                    if((h[i]-h[i+1])/(m[i+1]-m[i]) >= 0)
                    {
                        timearray.insert((h[i]-h[i+1])/(m[i+1]-m[i])+1);
                    }
                }
            }
        }
       std::set<int>::iterator it;
        flag = 0;
        
        for(it=timearray.begin();it!=timearray.end();it++)
        {
            //cout<<timearray[i]<<" ";
            for(j=0;j<n;j++)
            {
                temp[j] = h[j] + (*it)*m[j];
            }
            if(Iszag(temp,n))
            {
                // v.push_back(timearray[i]);
                if(flag == 0)
                {
                    timearrayer = (*it);
                }
                flag = 1;
            }
            else
            {
                if(flag == 1)
                {
                    start.push_back(timearrayer);
                    end.push_back((*it)-1);
                }
                flag = 0;
            }
            
        }
        if(flag == 1)
            start.push_back(timearrayer);
        if(start.size() == 1)
        {
            cout<<1<<endl;
            if(end.size()!=0)
            cout<<start[0]<<" "<<end[0]<<endl;
            else
            cout<<start[0]<<" Inf"<<endl;
        }
        else if(start.size() == 2)
        {
            cout<<2<<endl;
            cout<<start[0]<<" "<<end[0]<<endl;
            cout<<start[1]<<" Inf"<<endl;
        }
        else
            cout<<"0"<<endl;
 
    }
    
    return 0;
}
 
