//
//  main.cpp
//  CPP0124-PHÂN_TÍCH_THỪA_SỐ_NGUYÊN_TỐ-2
//
//  Created by Nguyễn Thị Hoài Thu on 27/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include "string"

using namespace std;

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin >> n;
    for(int i =2 ; i <= sqrt(n) ; i++){
        int cnt = 0;
        if(n % i == 0){
            while(n % i == 0){
                cnt++;
                n /= i;
            }
            cout  << i << " " << cnt << endl;
        }
    }
    if( n > 1)
        cout  << n << " " << 1;
}
//qiu
