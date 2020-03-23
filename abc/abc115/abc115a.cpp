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
    int D;
    string cs ="Christmas",ev = " Eve";

    cin >> D;
    D = 25 - D; 
    cout << cs;
    for(int i=0;i<D;i++){
        cout << ev;
    }
    cout << endl;

}