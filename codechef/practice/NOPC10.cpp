#include<iostream>
#include<stdio.h>
#include<map>
 
using namespace std;
 
 
 
 
int dayofweek(int d,int m,int y){
	static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
	y-=m<3;
	return (y+(y/4)-(y/100)+(y/400)+t[m-1]+d)%7;
}
 
int main(){
	std::map<int,std::string> day;
 
day[0] = "Sunday";
day[1] ="Monday";
day[2] = "Tuesday";
day[3] = "Wednesday";
day[4] = "Thursday";
day[5] =  "Friday";
day[6]  = "Saturday";
day[7] = "Sunday";
	int cases,date,month,year;
	
		cin>>date>>month>>year;
		int temp =dayofweek(date,month,year);
		cout<<day[temp]<<endl;
	
 
 
 
 
 
}
