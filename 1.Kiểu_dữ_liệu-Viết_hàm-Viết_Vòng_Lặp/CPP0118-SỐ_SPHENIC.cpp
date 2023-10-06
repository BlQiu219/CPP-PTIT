//
//  main.cpp
//  CPP0118-SỐ_SPHENIC
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include "string"
#include <algorithm>
#include "map"
#include "set"

using namespace std;
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

bool check(int n){
    int cnt = 0, tmp;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            tmp = 0;
            while(n % i == 0){
                n /= i;
                tmp++;
                if(tmp == 2)
                    return false;
            }
        }
    }
    if(n != 1)
        cnt++;
    if(cnt == 3)
        return true;
    return false;
}

int main() {
    int test;
    cin >> test;
    sang();
    while(test--){
        int n;
        cin >> n;
        if(check(n))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
}
//qiu
