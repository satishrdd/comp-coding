#include<iostream>
#include<vector>
#include<cstring>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	
	long n;
	cin>>n;
	std::vector<long> taxi;
	std::vector<long> pizza;
	std::vector<long> girls;
	long data;
	string name[n];

	long max_taxi=0,max_pizza=0,max_girls=0;

	long pos1=0,pos2=0,pos3=0;
	long count_taxi=0,count_pizza=0,count_girls=0;
	for(long i=0;i<n;i++){
		cin>>data;

		
		string temp;
		cin>>name[i];
		
		taxi.push_back(0);
		pizza.push_back(0);
		girls.push_back(0);
		
		for(long j=0;j<data;j++){
			cin>>temp;
			if((temp[0]==temp[1])&&(temp[1]==temp[3])&&(temp[3]==temp[4])&&(temp[4]==temp[6])&&(temp[6]==temp[7])){
				count_taxi++;
			}else if((temp[0]>temp[1])&&(temp[1]>temp[3])&&(temp[3]>temp[4])&&(temp[4]>temp[6])&&(temp[6]>temp[7])){
				count_pizza++;
			}else{
				count_girls++;
			}
		}
		taxi[i] = count_taxi;
		pizza[i] = count_pizza;
		girls[i] = count_girls;
		if(count_taxi>max_taxi){
			max_taxi = count_taxi;
			pos1=i;
			
		}
		if(count_pizza>max_pizza){
			max_pizza = count_pizza;
			pos2=i;

		}
		if(count_girls>max_girls){
			max_girls = count_girls;
			pos3=i;
		}
		count_taxi=0;
		count_girls=0;
		count_pizza=0;
		//cout<<max_pizza<<endl;
	}
	//cout<<max_pizza<<endl;

cout<<"If you want to call a taxi, you should call:";
long j=0,k=0;;
for(long i=0;i<n;i++){
		
		if((taxi[i]==max_taxi)){k++;}}
	for(long i=0;i<n;i++){
		
		if((taxi[i]==max_taxi)){
			j++;
			cout<<" "<<name[i];
			if(j==k){
				cout<<".\n";
			}else{
				cout<<",";
			}
		}}
		

	cout<<"If you want to order a pizza, you should call:";
	j=0,k=0;
	for(long i=0;i<n;i++){
		
		if((pizza[i]==max_pizza)){k++;}}
	for(long i=0;i<n;i++){
		
		if((pizza[i]==max_pizza)){
			j++;
			cout<<" "<<name[i];
			if(j==k){
				cout<<".\n";
			}else{
				cout<<",";
			}
		}}
		

	
cout<<"If you want to go to a cafe with a wonderful girl, you should call:";
	j=0,k=0;
	for(long i=0;i<n;i++){
		
		if((girls[i]==max_girls)){k++;}}
	for(long i=0;i<n;i++){
		
		if((girls[i]==max_girls)){
			j++;
			cout<<" "<<name[i];
			if(j==k){
				cout<<".\n";
			}else{
				cout<<",";
			}
		}}

	

	return 0;
}