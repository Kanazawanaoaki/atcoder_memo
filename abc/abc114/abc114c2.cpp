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

int num1[4]={0,3,5,7};

int makenum(int i);
int hantei(int num);

int pow(int a,int b){
    int num=1;
    for(int i=0;i<b;i++){
        num *= a;
    }
    return num;
}

int main(){
    int N;
    cin >> N;

    int i=0;
    int result =0;
    int X=0;
  	if(N>777777753)N=777777753;
    while(X<=N){
        X = makenum(i);
        //cout << X << endl;
        if(hantei(X)==1 && X<=N){result++;/*if(X>777777753)cout << X <<endl;*/}
        i++;
    }
    cout << result << endl; 
}

int makenum(int i){
    int num=0;
    int count=0;
    while(i>0){
        int x = i%4;
        i = i/4;
        num += num1[x]*pow(10,count);
        count++;
    }
    return num;

}


int hantei(int num){
    string N = to_string(num);
    int no=0;
    int yes3,yes5,yes7;
    yes3=yes5=yes7=0;
    for(int i=0;i<N.size();i++){
        if(N[i]!=3+'0' && N[i]!=5+'0' &&N[i]!=7+'0'){no++;break;}
        else if(N[i]==3+'0')yes3++;
        else if(N[i]==5+'0')yes5++;
        else if(N[i]==7+'0')yes7++;
    }

    if(no==0 && yes3>0 && yes5>0 && yes7>0){return 1;}
    else return 0;
}