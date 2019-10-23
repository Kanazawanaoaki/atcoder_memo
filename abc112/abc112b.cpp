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

int main(){
    int n,t1;
    cin >> n >> t1;

    int c[n],t[n];
    for(int i=0;i<n;i++){
        cin >> c[i] >> t[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(c[j]<c[i]){
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
                temp = t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
        //cout << c[i] << endl;
    }
    int result=0;
    for(int i=0;i<n&&result==0;i++){
        if(t[i]<=t1){cout << c[i] << endl;result++;}
    }
    if(result==0)cout << "TLE" << endl;



}