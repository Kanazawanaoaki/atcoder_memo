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

int count=0;
int end=0;
int N;
int index1=0;
int index2=0;

//numの位置から動作を行う関数
hantei(int num,int *h){
    int mini=100;
    for(int i=num;i<N;i++){
        if(h[i]==0)hantei(i,h);
        if(h[i]<mini && h[i]>0)mini=h[i];
    }

}

int main(){
    cin >> N;

    int h[N];
    for(int i=0;i<N;i++){
        cin >> h[i];
    }

    while(end==0){
        for(int j=0;j<N;j++){
            //cout << h[i];
            if(h[j]>0)k++;
        }
        //cout << endl;
        if(k==0)end++;

        hantei(0,h);

        int mini=100;
        i=index1=index2;
        //cout << "index2:" << index2 << " "; 
        for(i;i<N;i++){
            if(h[i]<mini && h[i]>0)mini=h[i];
        }
        if(mini==100){index2=0;continue;}
        cout << mini << endl;
        index2=0;
        i=index1;
        for(i;i<N;i++){
            h[i] -= mini;
            cout << h[i];
            if(h[i]==0){/*cout << i << endl;*/index2=i;}
        }
        cout << "count"  << endl;
        count+=mini;
    }
    
    cout << count+1 <<endl;
}