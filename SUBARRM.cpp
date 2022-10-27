#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
int a[MAX],b[MAX], n,m,dem = 0;
vector<int> c;

void input(){
	cout <<"Nhap m = ";
	cin >>m;
	cout <<"Nhap n = ";
	cin >>n;
}

void Ham(){
	n = n-1;
	for(int i=0;i<=n;i++){
		int x;
		cout <<"a["<<i<<"] = ";
		cin >>x;
		if(x<m){
			int length = c.size();
			for(int j=0;j<length;j++){
				if(c[j]<m){
					int s = c[j]+x;
					if(s==m)
						dem++;
					if(s<m)
						c.push_back(s);
				}
			}
			c.push_back(x);
		}
		if(x == m)
			dem++;
	}
	cout <<"Co tat ca "<<dem<<" cach phan tich.";
}

int main(){
	input();
	Ham();
	return 0;
	
}
