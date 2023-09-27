//
//  main.cpp
//  CPP0120-CHIA_HẾT_CHO_A_VÀ_B
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
#include "vector"
#include "sstream"

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


ll lcm(ll a, ll b){
    ll c = a, d = b;
    while(b){
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return c/a*d;
}

int main() {
    int test;
    cin >> test;
    sang();
    //cin.ignore();
    while(test--){
        int m, n, a, b, cnt = 0;
        cin >> m >> n >> a >> b;
        for(int i = m; i <= n; i++)
            if(i % a == 0 || i % b == 0)
                cnt++;
            cout << cnt << endl;
    }
}
//qiu

