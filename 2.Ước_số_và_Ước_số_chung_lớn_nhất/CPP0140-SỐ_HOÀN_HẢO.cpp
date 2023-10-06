//
//  main.cpp
//  CPP0140-SỐ_HOÀN_HẢO
//
//  Created by Nguyễn Thị Hoài Thu on 27/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include "string"
#include <algorithm>

using namespace std;

long long ans[10];
int n = 0;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return n > 1;
}

void init(){
    for(int i = 2; i <= 32; i++){
        if(isPrime(i)){
            int tmp = (int)pow(2, i) - 1;
            if(isPrime(tmp))
                ans[n++] = 1ll * tmp * (int)pow(2, i-1);
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int test;
    init();
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        int kt = 0;
        for(long long x : ans){
            if(x == n){
                kt = 1;
                break;
            }
        }
        if(kt)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
//qiu
