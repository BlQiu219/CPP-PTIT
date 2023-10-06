//
//  main.cpp
//  CPP0122-ƯỚC_SỐ_CHUNG_LỚN_NHẤT_CỦA_N_SỐ_NGUYÊN_DƯƠNG_ĐẦU_TIÊN
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

int main() {
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long x = 1;
        for(long long i = 2; i <= n; i++)
            x = lcm(x, i);
        cout << x << endl;
    }
}
//qiu

