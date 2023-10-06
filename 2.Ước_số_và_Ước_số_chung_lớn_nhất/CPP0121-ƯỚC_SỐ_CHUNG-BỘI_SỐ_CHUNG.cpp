//
//  main.cpp
//  CPP0121-ƯỚC_SỐ_CHUNG-BỘI_SỐ_CHUNG
//
//  Created by Nguyễn Thị Hoài Thu on 27/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include "string"
#include<algorithm>

using namespace std;

long long GCD(long a, long b){
    if(b == 0)
        return a;
    return GCD(b, a % b);
}

int main() {
    int test;
    cin >> test;
    while(test--)
    {
        long long a, b;
        cin >> a >> b;
        long long c = GCD(a, b);
        cout << (a*b)/c << " " << c << endl;
    }
}
//qiu
