#include <bits/stdc++.h>
using namespace std;

int prime[100001];

void sang(){
    for(int i = 0; i <= 10000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(10000); i++){
        if(prime[i]){
            for(int j = i * i; j <= 10000; j+=i){
                prime[j] = 0;
            }
        }
    }
}
int uocNT(int N){
    for(int i = 2; i <= sqrt(N); i++){
        if(prime[i]){
            if(N % i == 0){
                return i;
            }
        }
    }
    return N;
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << 1 <<" ";
        for(int i = 2; i <= n; i++){
            cout << uocNT(i) <<" " ;
        }
        cout << "\n";
    }
}