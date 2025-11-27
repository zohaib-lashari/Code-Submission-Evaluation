#include<iostream>
using namespace std;

int main()
{
	unsigned size{0};
	cin>>size;
	long long A[size];
	long long move{0};
	for(long long i=0;i<size;i++)
		cin>>A[i];
		
	for(long long i=1;i<size;i++)
	{
		if(A[i]<A[i-1])
		{
				
			move += A[i-1] - A[i];
			A[i] = A[i-1];
		}
	}
	cout<<move;
}
