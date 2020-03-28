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

int num[3]={3,5,7};

int makenum(int i);
int hantei(int num);

int main(){
    int N;
    cin >> N;
    string num = to_string(N);
    int nlen = num.size();

    int result =0;
    if(nlen<7){
        for(int i=0;i<=N;i++){
            result += hantei(N);
        }
    }
    else{
        if(num[0]-'0'<3)result=pow(3,nlen)-pow(2,nlen);
        else result =0;
    }
    cout << result << endl;
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

    if(no==0 && yes3>0 && yes5>0 && yes7>0){return 1;cout << "+";}
    else return 0;
}
