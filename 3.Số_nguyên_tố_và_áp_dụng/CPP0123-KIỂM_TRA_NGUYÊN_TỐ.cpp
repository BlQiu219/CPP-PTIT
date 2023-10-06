//
//  main.cpp
//  CPP0123-KIỂM_TRA_NGUYÊN_TỐ
//
//  Created by Nguyễn Thị Hoài Thu on 06/10/2023.
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
    if(isPrime(n))
        cout << "YES" << endl;
    else
        cout  << "NO" << endl;
}
//qiu

