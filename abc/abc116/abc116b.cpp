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
    int s;
    cin >> s;
    int a[1000000];
    a[0]=s;
    int end=0;
    for(int i=1;i<10000000&&end==0;i++){
        if(a[i-1]%2==0)a[i]=a[i-1]/2;
        else a[i]=3*a[i-1]+1;
        for(int j=0;j<i;j++){
            if(a[j]==a[i]){cout<<i+1<<endl;end++;}
        }
    }



}