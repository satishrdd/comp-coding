#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int cases;
    long n;
        string array[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    cin>>cases;
    while(cases--){
    cin>>n;
    string binary =bitset<32>(n).to_string();
    string a = binary.substr(0,23);
    string b = binary.substr(23,4);
    string c = binary.substr(27,5);
    cout<<bitset<8>(c).to_ulong()<<" "<<array[bitset<8>(b).to_ulong()-1]<<" "<<bitset<32>(a).to_ulong()<<endl;
    }
    return 0;
}