//
//  main.cpp
//  CPP0143-SỐ_FIBONACCI_THỨ_N
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
        int n;
        cin >> n;
        long long fb[1000001];
        fb[1] = 1;
        fb[2] = 1;
        for(int i = 3 ; i <= 92; i++){
            fb[i] = fb[i-1] + fb[i-2];
        }
        cout << fb[n] ;
        cout << endl;
    }
}
//qiu

