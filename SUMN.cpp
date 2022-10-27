#include <iostream>
using namespace std;
const int MAX=100;
int a[MAX], n, p = 0;
void print(int k){
	cout<<n<<" = "<<a[1];
	for(int i=2; i<k; i++){
		cout<<"+"<<a[i];
	}
	cout<<endl;
}
void gen(int k, int i){
	if(p==n){
		print(k);
		return;
	}
	if(p>n){
		return;
	}
	for(; i>0; i--){
		p+=i;
		a[k]=i;gen(k+1, i);
		p-=i;
	}
}
int main()
{
	cout<<"Nhap n = "; cin>>n;
	gen(1, n);
	return 0;
}
