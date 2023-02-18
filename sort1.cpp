#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("sort1.inp", "r", stdin);
	freopen("sort1.out", "w", stdout);
	int n, temp = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i; j < n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout<<a[i];
	}
}
