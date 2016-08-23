#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cout<<"Ready"<<endl;
    while(getline(cin,s) && !s.empty()){
        if(s[0]==' ' && s[1] == ' '){
            break;
        }
     if(s=="db"||s=="bd"||s=="pq"||s=="qp"){
            cout<<"Mirrored pair"<<endl;
        }else{
            cout<<"Ordinary pair"<<endl;
        }
        s.clear();
    }
}