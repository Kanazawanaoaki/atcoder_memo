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

int cnt=0;

void check(long x,int n,int a,int b,int c){
    if(x > n)return;
    if(a&b&c){cnt++;cout << (a&b&c) << x <<endl;}
    check(x*10+3,n,1,b,c);
    check(x*10+5,n,a,1,c);
    check(x*10+7,n,a,b,1);
}

int main(){
    int n;
    cin >> n;
    check(0,n,0,0,0);
    cout << cnt << endl;
}