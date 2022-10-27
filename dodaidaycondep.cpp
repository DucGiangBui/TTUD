#include<bits/stdc++.h>
using namespace std;

long long a[100000],n,kq[100000],k,dem,max1=-1e9+5,j,t,b[100000];

void Output(){
	dem=1;
	j=0;
	t=1;
	for(int i=1;i<=n;i++)
		if(a[i]==1){
			b[++j]=kq[i];
		}
	for(int i=2;i<=j;i++){
		if(b[i]-b[i-1]!=1){
			t=0;
			break;
		}
	}
	if(t==1 && j>max1 )
		max1=j;
}
void Try(int i){
	if(i>n){
		Output();
		return;
	}
	for(int j=0;j<=1;j++){
		a[i]=j;
		Try(i+1);
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>kq[i];
	Try(1);
	cout<<max1;
}
