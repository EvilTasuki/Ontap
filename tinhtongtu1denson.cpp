#include <iostream>
using namespace std;

int main(){
    int n, tong = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        tong = tong + i;
    }
    cout<<tong;
}