#include <bits/stdc++.h>
using namespace std;

/*
Nếu n là số chẵn thì bạn có thể chuyển nó thành dạng n = 2^k * m (m là số lẻ).
Lúc này bạn đã biết được k số thỏa mãn yêu cầu đề bài là từ 2^1 đến 2^k.
Tiếp tục duyệt từ 1 đến sqrt(m) để tìm các ước của m. 
Các ước này nhân với từng cái ước 2^k hồi nãy sẽ ra thêm những số thỏa mãn đề bài.
100 = 2^2 * 25
Các ước của 25 bao gồm 1, 5 và 25, vậy ta sẽ có 6 số:

2^1 * 1 = 2
2^2 * 1 = 4
2^1 * 5 = 10
2^2 * 5 = 20
2^1 * 25 = 50
2^2 * 25 = 100
*/


int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n % 2 != 0){
            cout << 0 << endl;
            continue;
        }
        int res1 = 0;
        while(n % 2 == 0){
            res1++;
            n /= 2;
        }
        int res2 = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(i == n /i){
                    ++res2;
                }else{
                    res2+=2;
                }
            }
        }
        cout << res1 * res2 << endl;
    }
}