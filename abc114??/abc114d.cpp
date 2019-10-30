#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;

int s[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int a[25];

int kaijyou(int n){
    long result=1;
    for(int i=2;i<=n;i++){
        result *= i;
    }
    return result;
}

void soinsu(int N){
    for(int i=2;i<=N;i++){
        int num =i;
        for(int j=0;j<25;j++){
            int amari =0;
            while(amari ==0){
                amari = num%s[j];
                if(amari==0){num /= s[j];a[j]++;}
            }
        }
    }
}

int count(int *a){
    int count=0;
    for(int i=0;i<25;i++){
        if(a[i]>=74)count++;
        for(int j=i+1;j<25;j++){
            if((a[i]>=14 && a[j]>=4) || (a[i]>4 && a[j]>=14))count++;
            if((a[i]>=24 && a[j]>=2)|| (a[i]>24 && a[j]>=2))count++;
            for(int k=j+1;k<25;k++){
                if((a[i]>=2 && a[j]>=4 && a[k]>=4) || (a[i]>=4 && a[j]>=2 && a[k]>=4) || (a[i]>=4 && a[j]>=4 && a[k]>=2))count++;
            }

        }
    }
    return count; 
}

int main(){
    long N;
    cin >> N; 

    for(int i=0;i<25;i++){
        a[i]=0;
    }

    //N = kaijyou(N);
    //cout << N << endl;
    soinsu(N);

    /*for(int i=0;i<25;i++){
        cout << a[i] << endl;
    }*/

    int result = count(a);
    cout << result << endl;

}