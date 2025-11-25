#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long total{0},takeInput{0};
	
	for(long long i=0;i<n-1;i++)
	{
		cin>>takeInput;
		total += takeInput;
	}
	long long sum = (n*(n+1))/2;
	
	cout<<sum-total;
}
