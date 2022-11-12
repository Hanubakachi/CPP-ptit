#include <bits/stdc++.h>
using namespace std;

long long gcd(int a,int b){ 
    if(b==0){
     return a;
    } else{
     return gcd(b,a%b);
      } 
}
long long lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int main(){
    int t; cin >> t;
    while(t--){
        int M, N;
        int A, B;
        cin >> M >> N >> A >> B;
        int H = abs(M - N);
        if(M > N){
            int tmp = M;
            M = N;
            N = tmp;
        }
        int M1 = M - 1;
        int N1 = N;
        int U1 = (M1 / A) + (M1 / B) - (M1 / lcm(A, B));
        int U2 = (N1 / A) + (N1 / B) - N1 / lcm(A, B);
        cout << U2 - U1 << endl;
    }


}