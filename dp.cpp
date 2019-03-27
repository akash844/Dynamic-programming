#include<iostream>
using namespace std;
long long int fibo(int n,long long int fib[])
{
	if (n<=2)
		return 1;
	else if (fib[n]!=0)
		return fib[n];
	else
	{
		fib[n]=fibo(n-1,fib)+fibo(n-2,fib);
		return fib[n];
	}		
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int fib[n+2]={0};
		long long int ans=fibo(n,fib);
		cout<<ans<<endl;
	}
}
