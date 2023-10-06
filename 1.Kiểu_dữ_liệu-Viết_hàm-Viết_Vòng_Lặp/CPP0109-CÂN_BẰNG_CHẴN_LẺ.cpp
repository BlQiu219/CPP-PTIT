//
//  main.cpp
//  CPP0109-CÂN_BẰNG_CHẴN_LẺ
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

bool check(int n){
    int c = 0, l = 0, tmp;
    while(n){
        tmp = n % 10;
        n /= 10;
        if(tmp % 2 == 1)
            l++;
        else c++;
    }
    if(c != l)
        return false;
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin >> n;
    int a = pow(10, n-1);
    int b = pow(10, n) - 1;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(check(i)){
            if(cnt == 10){
                cout << endl;
                cnt = 0;
            }
            cout << i << " ";
            cnt++;
        }
    }
    return 0;
}
//qiu
