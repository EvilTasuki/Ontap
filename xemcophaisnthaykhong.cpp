#include <bits/stdc++.h>
using namespace std;

bool is_factor(int n){
	for (int i = 2;i <= n - 1; i++){
		if(n % i == 0){
			return false;
		}
		else{
			return true;
		}
	}
}

int main(){
	int n;
	cout<<"Moi ban nhap so n"<<endl;
	cin >> n;
	if(is_factor(n) == true){
		cout<<n<<" la so nguyen to";
	}
	else{
		cout<<n<<" khong la so nguyen to";
	}
}
