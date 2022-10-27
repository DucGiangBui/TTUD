#include<bits/stdc++.h>
using namespace std;

const long long MAX = 10000;
long long n,m,a[MAX];
string z,w;

int Input(){
	getline(cin,z);
	w="";
	n=z.length();
	
	for(int i=n-1;i>=0;i--)
		w+=z[i];
	cin>>m;
	for(int i=1;i<=m;i++)
		cin>>a[i];
}

int Output(int t,int k){
	for(int i=1;i<=m;i++)
	{
		t=a[i]%n;
		k=a[i]/n;
		if(k%2==1) cout<<w[t];
		else if(k%2 == 0) cout<<z[t];
	}
}

int main()
{
	Input();
	Output(0,0);
	return 0;
}
