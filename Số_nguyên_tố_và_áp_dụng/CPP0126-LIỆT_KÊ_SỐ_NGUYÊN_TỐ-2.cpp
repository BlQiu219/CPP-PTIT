//
//  main.cpp
//  CPP0126-LIỆT_KÊ_SỐ_NGUYÊN_TỐ-2
//
//  Created by Nguyễn Thị Hoài Thu on 06/10/2023.
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

int main() {
    int test;
    cin >> test;
    sang();
    while(test--){
        int l, r;
        cin >> l >> r;
        if(l > r)
            swap(l,r);
        for(int i = l; i <=r; i++){
            if(p[i] == 1)
                cout << i << " ";
        }
        cout << endl;
    }
}
//qiu
