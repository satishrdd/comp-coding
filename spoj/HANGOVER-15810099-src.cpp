#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    double c;
    cin>>c;
    while(c)
    {
        float len=0.00;
        int n=0;
        while(len<c)
        {   n++;  // n is increased before calc len
            len+=1.00/(1.00+n);

        }
        cout<<n<<" card(s)\n";
        cin>>c;
    }
   return 0;
}