#include<bits/stdc++.h>



using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	long long a,b,c,m;
	cin>>a>>b>>c;
	std::vector<long long> ve1;
	std::vector<long long> ve2;
	cin>>m;
	long long temp;
	string s;
	for(int  i=0;i<m;i++){
		cin>>temp>>s;
		if(s=="USB"){
			ve1.push_back(temp);
		}else{
			ve2.push_back(temp);
		}
	}

	sort(ve1.begin(),ve1.end());
	sort(ve2.begin(),ve2.end());
		
	long long sum=0;
	long long count=0;
	for(int i=0;i<min(a,(long long)ve1.size());i++){
		sum +=ve1[i];
		count++;
	}
	for(int i=0;i<min(b,(long long)ve2.size());i++){
		sum +=ve2[i];
		count++;
	}

	long long pos1=min(a,(long long)ve1.size());
	long long pos2=min(b,(long long)ve2.size());
	for(int i=0;i<c;i++){
		if(pos1==ve1.size()){
			if(pos2==ve2.size()){
				break;
			}else{
				sum+=ve2[pos2];
				count++;
				pos2++;
			}
		}else{
			if(pos2==ve2.size()){
				sum+=ve1[pos1];
				count++;
				pos1++;
			}else{
				if(ve1[pos1]<=ve2[pos2]){
					sum+=ve1[pos1];
					count++;
					pos1++;
				}else{
					sum+=ve2[pos2];
					count++;
					pos2++;
				}
			}
		}
	}
	cout<<count<<" "<<sum<<endl;
	return 0;
}