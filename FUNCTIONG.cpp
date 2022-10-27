#include<bits/stdc++.h>

using namespace std;

int G(int n)
{
	if(n==1){
	 	return 1;
    }
	else if(n==3){
	  	return 3;
    }
	else if(n!=1|| n!=3){
		int n1=n/2,n2=n/4;
	    if(n%2==0){
	    	return G(n1);
		}
		else if(n%4==1){
			return 2*G(2*n2+1)-G(n2);
		}
		else if(n%4==3){
			return 3*G(2*n2+1) - 2*G(n2);
		}
	}
}
int main()
{
	long long int n;
	cout<<"Nhap n = ";cin>>n;
	cout<<"g("<<n<<") = "<<G(n);
	return 0;
}
