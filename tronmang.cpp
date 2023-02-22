#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("tronmang.inp", "r", stdin);
	freopen("trongmang.out", "w", stdout);
	int n, m, temp = 0;
	cin >> n >> m;
	int a[n], b[m], c[n + m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	for (int i = 0; i < n; i++){
		c[i] = a[i];
	}
	for(int i = 0; i < n; i++){
		c[n+i] = b[i];
	}
	
	for(int i = 0; i < (n + m - 1) ; i++){
		for(int j = i; j < (n + m); j++){
			if(c[i] > c[j]){
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	
	for(int i = 0; i < n+m; i++){
		cout<<c[i];
	}
}
