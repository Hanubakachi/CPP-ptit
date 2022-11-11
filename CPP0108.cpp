#include <bits/stdc++.h>
using namespace std;

bool checkNT(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
bool checkTDan(long long n){
    if(n < 10){
        return true;
    }
    int tmp = n % 10;
    n /= 10;
    while(n){
        if(n % 10 < tmp){
            tmp = n % 10;
        }else{
            return false;
        }
        n /= 10;
    }
    return true;
}
bool checkGDan(long long n){
    if(n < 10){
        return true;
    }
    int tmp = n % 10;
    n /= 10;
    while(n){
        if(n % 10 > tmp){
            tmp = n % 10;
        }else{
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int dem = 0;
        long long begin = pow(10, n - 1);
        long long end = pow(10, n);
        for(int i = begin; i < end; i++){
            if(checkGDan(i) && checkNT(i)){
                ++dem;
            }else if(checkTDan(i) && checkNT(i)){
                ++dem;
            }
        }
        
        cout << dem << endl;
    }
}