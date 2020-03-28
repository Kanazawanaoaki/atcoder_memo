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
#include <stdio.h>
using namespace std;

int main(){
    int num = 753;
    string S;
    cin >> S;
    int X = (S[0]-'0')*100 + (S[1]-'0')*10 + (S[2]-'0');
    //cout << X <<endl;
    int dif = num - X;
    if(dif < 0)dif *= -1;
    for(int i=1;i<S.size()-2;i++){
        X = (S[i]-'0')*100 + (S[i+1]-'0')*10 + (S[i+2]-'0');
        //cout << X << endl;
        int local = num - X;
        if(local < 0)local *= -1;
        if(local < dif)dif = local;
    }
    cout << dif << endl;
}