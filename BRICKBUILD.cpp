#include<iostream>
using namespace std;
	
long long f(long long  n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	else if(n>=2)
		return f(n-1)+2*f(n-2);
}
	
int main()
{
	long long n; 
	cout<<"N = ";cin>>n;
	cout<<"So phuong an = "<<f(n);
}







