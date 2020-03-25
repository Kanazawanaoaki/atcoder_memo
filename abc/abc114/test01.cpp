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
    int num1[3]={3,5,7};

    int num=0;
    int end=0;
    int count=0;
    int i=4;
    while(i>0){
        int x = i%3;
        i = i/3;
        cout << x << " " << i << " "<< num1[x] << endl;
        num += num1[x]*pow(10,count);
        count++;
        cout << num << endl;
    }
    //cout << result << endl; 
}

