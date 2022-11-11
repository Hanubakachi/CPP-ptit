#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        char g;
        if(c >= 'A' && c <= 'Z'){
           g = c + 32;
            cout << g <<"\n";
        }else if(c >= 'a' && c <= 'z'){
            g= c - 32;
            cout << g <<"\n";
        }
    }
}