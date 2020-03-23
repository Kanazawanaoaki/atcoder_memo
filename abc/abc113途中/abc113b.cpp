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

int min_index(int *a,int n){
    int result=0;
    int temp = a[0];
    for(int i=1;i<n;i++){
        if(a[i]<temp){temp = a[i];result=i;}
    }
    return result;
}

int main(){
    int N,T,A;
    cin >> N >> T >> A;

    int h[N];
    int tx[N];
    for(int i=0;i<N;i++){
        cin >> h[i];
        tx[i] = A*1000 - (T*1000 - h[i]*6);
        if(tx[i]<0)tx[i] *= -1;
        //cout << tx[i] <<endl; 
    }

    cout << min_index(tx,N)+1 << endl;
}