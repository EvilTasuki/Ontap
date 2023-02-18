#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	long long s = 1;
	cout<<"Vui long nhap n:";
	cin >> n;
	if (n > 1)
		for (int i = 2; i <= n; i++){
			s = s*i;
		}
		cout<<"Giai thua cua n la:"<<s;
	else if (n == 1){
		cout<<"Giai thua cua n la: 1";
	}
	else{
		cout<<"So ban nhap vao khong hop le";
	}
}
