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

int hantei(string num);
int pl(int a,int b);

int main(){
    int N;
    cin >> N;
    int fin=0;//最終結果
    if(N>=777777753)fin=26484;
    //else if(N>=77777753)fin=
    else if(N>=7777753)fin=2538+pl(7777754,N);
    else fin=pl(357,N);
    cout << fin << endl;
    
}

int pl(int a,int b){
    int result=0;
    for(int i=a;i<b;i++){
        string num = to_string(i);
        if(hantei(num) == 1){cout << i << endl;result++;}
    }
    return result;
}

int hantei(string N){
    int no=0;
    int yes3,yes5,yes7;
    yes3=yes5=yes7=0;
    int result=0;
    for(int i=0;i<N.size()&&result==0;i++){
        if(N[i]!=3+'0' && N[i]!=5+'0' &&N[i]!=7+'0'){no++;result++;}
        else if(N[i]==3+'0')yes3++;
        else if(N[i]==5+'0')yes5++;
        else if(N[i]==7+'0')yes7++;
    }
    if(no==0 && yes3>0 && yes5>0 && yes7>0){return 1;}
    else return 0;
}