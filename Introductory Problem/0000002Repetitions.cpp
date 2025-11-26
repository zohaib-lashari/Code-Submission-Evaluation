#include<iostream>
using namespace std;

int main(){
	
	int count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int max[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	string fromUser;
	
	cin>>fromUser;
	for(unsigned long i=0;i<fromUser.length();i++)
	{
		char current = fromUser[i];
		int j = current -'A';
				if(i>0 && fromUser[i-1] != fromUser[i])
				{
					count[j] = 1;
					if(count[j]>max[j])	max[j] = count[j];
				}else{
					count[j]++;
					if(count[j]>max[j])	max[j] = count[j];
				}
			
	}
	
	int Finalmax{0};
	for(int i=0;i<26;i++)
	{
		if(Finalmax<max[i])
		{
			Finalmax = max[i];
		}
	}
	cout<<Finalmax;
}
