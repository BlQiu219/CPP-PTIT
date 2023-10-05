//
//  main.cpp
//  CPP0131-ƯỚC_SỐ_NGUYÊN_TỐ_NHỎ_NHẤT
//
//  Created by Nguyễn Thị Hoài Thu on 27/09/2023.
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

int a[10000001]={0};
int p[1000000], n=1000000;

void sang(){
    for(int i = 2; i <= 10000001; i++)
        for(int j = i * 2; j <= 10000001; j+=i)
            a[j] = 1;
}

int main() {
    // insert code here...
    int test;
    cin >> test;
    sang();
    while(test--){
        int n;
        cin >> n;
        cout << "1 ";
        for(int i = 2; i <= n; i++){
            if(a[i] == 0)
                cout << i << " ";
            else{
              if(i % 2 == 0)
                  cout<< "2 ";
              else{
                for(int j = 2; j <= sqrt(i); j++)
                    if(i % j == 0){
                        cout << j << " ";
                        break;
                    }
                  }
                }
            }
            cout << endl;
        }
    return 0;
}
