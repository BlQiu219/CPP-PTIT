//
//  main.cpp
//  CPP0141-KIỂM_TRA_SỐ_FIBONACCI
//
//  Created by Nguyễn Thị Hoài Thu on 06/10/2023.
//

#include <iostream>

using namespace std;

long long fibo[1000001];

void f(){
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i <= 92; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
}

int main(){
    f();
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        for(int i = 0; i <= 92; i++){
            if(fibo[i] == n){
                cout << "YES";
                break;
            }
            if(fibo[i] > n){
                cout << "NO";
                break;
            }
        }
        cout << endl;
    }
}
//qiu
