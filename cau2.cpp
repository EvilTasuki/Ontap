#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("cau2.inp", "r", stdin);
	freopen("cau2.out", "w", stdout);
	int a, b, c;
	cin >> a >> b >> c;
	int tbc = (a + b + c)/3;
	int max3 = max(max(a, b), c), min3 = min(min(a, b), c);
	cout<<tbc<<endl;
	cout<<max3<<' '<<min3;
}
