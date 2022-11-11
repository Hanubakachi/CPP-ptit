#include <iostream>

using namespace std;


long long Sumgt(int n){
     long long sum = 1;
     long long tong = 0;
    for(int i = 2; i <= n; i++){
        tong += sum;
        sum *= i;
        
    }
    tong += sum;
    return tong;
}

int main(){
    int n;
    cin >> n;
    cout << Sumgt(n) ;
}