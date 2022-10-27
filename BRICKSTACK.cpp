#include <bits/stdc++.h>
using namespace std;

int main(){
	
	
	long long n,k=0,a[1000];
	cin>>n;
	
	for (int i=1;i<=n;i++) cin>>a[i];
	  	sort(a+1, a+n+1);
	    for (int i=1;i<=n;i++)
	        if (k<=a[i]) k++;
	    cout<<k;	      
		
	return 0;		  	
}
