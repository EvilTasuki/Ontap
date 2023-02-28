#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("diemthuong.inp", "r", stdin);
	freopen("diemthuong.out", "w", stdout);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	int diem_thuong_ht = a[0];
	for(int i = 0; i < n; i++){
		if (diem_thuong_ht < a[i]){
			diem_thuong_ht = a[i];
		}
		cout<<diem_thuong_ht;
	}
}
