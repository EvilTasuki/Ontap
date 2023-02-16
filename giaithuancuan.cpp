#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	long long s = 1;
	cout<<"Vui long nhap n:";
	cin >> n;
	for (int i = 1; i <= n; i++){
		s = s*i;
	}
	cout<<"Giai thua cua n la:"<<s;
}
