//
//  main.cpp
//  CPP0108-SỐ_TĂNG_GIẢM
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <sstream>

using namespace std;
using ll = long long;
int mod  = 1000000007;

int p[1000000], n=1000000;
void sang(){
    for(int i = 0; i < n; i++)
        p[i] = 1;
    p[0] = p[1] = 0;
    for(int i = 2; i < sqrt(n); i++){
        for(int j = i*i; j < n; j+=i){
            if(p[j] == 1)
                p[j] =  0;
        }
    }
}


int tang(long n){
    while(n && n/10){
        int temp = n % 10;
        n /= 10;
        if(temp <= n % 10)
            return 0;
    }
    return 1;
}

int giam(long n){
    while(n && n/10){
        int temp = n % 10;
        n /= 10;
        if(temp >= n % 10)
            return 0;
    }
    return 1;
}

bool pN(long n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int test;
    cin >> test;
    sang();
    //cin.ignore();
    while(test--){
        int n,cnt = 0;
        cin >> n;
        long a = pow(10, n-1), b = pow(10, n);
        for(long i = a; i <= b; i++)
            if(tang(i) || giam(i))
                if(pN(i))
                    cnt++;
        cout << cnt << endl;
    }
}
//qiu
