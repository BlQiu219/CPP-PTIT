//
//  main.cpp
//  CPP0129-ƯỚC_SỐ_CỦA_GIAI_THỪA
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

int main(int argc, const char * argv[]) {
    // insert code here...
    int test;
    cin >> test;
    while(test--){
        int n,p;
        cin >> n >> p;
        int cnt = 0;
        while(n){
            int temp = n;
            while(temp % p == 0){
                temp /= p;
                cnt++;
            }
            n--;
        }
        cout << cnt << endl;
    }
    return 0;
}
//qiu
