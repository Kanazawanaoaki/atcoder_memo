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

static int compare(const void*a,const void*b){
    int anum = *(int*)a;
    int bnum = *(int*)b;
    return anum - bnum;
}

int main(){
    int N,K;
    cin >> N >> K;

    int h[N];
    for(int i=0;i<N;i++){
        cin >> h[i];
    }
    //sort
    qsort(h,N,sizeof(int),compare);

    int result=1000000000;
    for(int i=K-1;i<N;i++){
        int local = h[i] - h[i-K+1];
        if(local<result)result=local;
    }
    cout << result << endl;
}