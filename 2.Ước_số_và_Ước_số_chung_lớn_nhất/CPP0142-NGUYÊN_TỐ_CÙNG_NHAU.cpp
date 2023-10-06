//
//  main.cpp
//  CPP0142-NGUYÊN_TỐ_CÙNG_NHAU
//
//  Created by Nguyễn Thị Hoài Thu on 27/09/2023.
//

#include <iostream>
#include <iomanip>
#include <map>
#include <math.h>

using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return n > 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int t = 0;
        for(int i = 1; i <= n; i++){
            if(gcd(i, n) == 1)
                t++;
        }
        if(prime(t))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}
//qiu
