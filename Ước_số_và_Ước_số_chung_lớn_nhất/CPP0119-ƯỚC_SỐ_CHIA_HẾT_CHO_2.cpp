//
//  main.cpp
//  CPP0119-ƯỚC_SỐ_CHIA_HẾT_CHO_2
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

long long lcm(long long a,long long b){
    long long c = a, d = b;
    while(b){
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return c*d/a;
}

int solve(int n){
    int ans = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(i % 2 == 0)
                ans++;
            if((n/i) % 2 == 0)
                ans++;
            if(i*i == n && n % 2 == 0)
                ans--;
        }
    }
    return ans;
}

int main() {
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
//qiu

