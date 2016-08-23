#include<iostream>
#include<string>
#include<cmath>
#include <sstream>
#include<stdlib.h>
using namespace std;

template <typename T>
string NumberToString(T pNumber)
{
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}

int main(int argc, char const *argv[])
{
	/* code */
	int ar[7];
	int val[3];
	string str;
	string mapa[10][2];
	mapa[0][0] = "0111111";
	mapa[0][1] = "063";
	mapa[1][0] = "0001010";
	mapa[1][1] = "010";
	mapa[2][0] = "1011101";
	mapa[2][1] = "093";
	mapa[3][0] = "1001111";
	mapa[3][1] = "079";
	mapa[4][0] = "1101010";
	mapa[4][1] =   "106"  ;
	mapa[5][0] = "1100111";
	mapa[5][1] ="103";
	mapa[6][0] = "1110111";
	mapa[6][1] ="119";
	mapa[7][0] = "0001011";
	mapa[7][1] ="011";
	mapa[8][0] = "1111111";
	mapa[8][1] ="127";
	mapa[9][0] = "1101011";
	mapa[9][1] ="107";
	while(true){
		cin>>str;
		//cout<<"entered str"<<endl;
		if(str=="BYE"){
			return 0;
		}else{
			int a=0,b=0;
			int i;
		
			//cout<<"entered first else"<<endl;
			//cout<<str.length()<<endl;
			for (i = 0; i < str.length(); i=i+3)
			{
				/* code */
				//cout<<"entered FOR"<<endl;
				if(str[i]=='+'){
					//cout<<"entered if"<<endl;
					break;
				}else{
					//cout<<"entered ele"<<endl;
					string str2 = str.substr(i,3);
					for(int k=0;k<10;k++)
					{
						if(str2==mapa[k][1]){
							a = a*(pow(10,1))+k;
							//cout<<k<<endl;
							break;
						}
					}
				}
				
			}
			
			for (int j = i+1; j < str.length(); j=j+3)
			{
				/* code */
				//cout<<"went to j loop"<<endl;
				if(str[j]=='='){
					break;
				}
				for(int k=0;k<10;k++)
					{
						if(str.substr(j,3)==mapa[k][1]){
							b = b*(pow(10,1))+k;
							break;
						}
					}
			}
			string ans = NumberToString(a+b);
			/*long long val = a+b;
			int count = ans.length()-1;
			while(count>=0){
				cout<<mapa[val/(int)pow(10,count)][1];
				val = val - pow(10,count)*(val/pow(10,count));
				count--;
			}*/
				cout<<str;
			for(int i=0;i<ans.length();i++){
				
					if(ans[i]=='0'){
						cout<<mapa[0][1];
					}else if(ans[i]=='1'){
						cout<<mapa[1][1];
					}else if(ans[i]=='2'){
						cout<<mapa[2][1];
					}else if(ans[i]=='3'){
						cout<<mapa[3][1];
					}else if(ans[i]=='4'){
						cout<<mapa[4][1];
					}else if(ans[i]=='5'){
						cout<<mapa[5][1];
					}else if(ans[i]=='6'){
						cout<<mapa[6][1];
					}else if(ans[i]=='7'){
						cout<<mapa[7][1];
					}else if(ans[i]=='8'){
						cout<<mapa[8][1];
					}else if(ans[i]=='9'){
						cout<<mapa[9][1];
					}
				
			}
			cout<<endl;

		}
	}
	return 0;
}