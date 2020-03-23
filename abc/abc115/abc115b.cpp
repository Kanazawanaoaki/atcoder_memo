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
    int N;
    cin >> N;

    int p[N];
    for(int i=0;i<N;i++){
        cin >> p[i];
    }
    int total=p[0];
    int temp;
    for(int i=1;i<N;i++){
        total += p[i];
        if(p[i]>p[0]){temp=p[i];p[i]=p[0];p[0]=temp;}
    }
    total -= p[0]/2;

    cout << total << endl;
}