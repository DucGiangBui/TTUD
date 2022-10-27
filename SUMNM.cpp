#include <iostream>
using namespace std;

const int MAX=100;
int m , n, a[MAX];

void print(){
	cout<<m<<" = "<<a[1];
	for(int i=2; i<=n; i++){
		cout<<"+"<<a[i];
	}
	cout<<endl;
}

void Gen(int k, int h){
	if(k>n){
		if(h==m){
			print();
		}
		return;
	}
	for(int i=1; i<= m-h-n+k; i++){
		a[k] = i;
		h = h + a[k];
		Gen(k+1, h);
		h = h - a[k];
	}
}

int main()
{
	cout<<"Nhap n = "; cin>>m;
	cout<<"Nhap m = "; cin>>n;
	Gen(1,0);
	return 0;
}
