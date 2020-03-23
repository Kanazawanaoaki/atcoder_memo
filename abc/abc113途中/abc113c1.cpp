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

int N,M;

static int compare(const void*a,const void*b){
    int anum = *(int*)a;
    int bnum = *(int*)b;
    return anum - bnum;
}

class num{
    public:
    int p;
    int y;
    int n;
    int b;
};

int main(){
    cin >> N >> M;
    class num num[M];
    for(int i=0;i<M;i++){
        cin >> num[i].p >> num[i].y;
    }
    for(int j=1;j<=N;j++){
        int y1[M];
        for(int i=0;i<M;i++){
            y1[i]=0;
        }
        int k=0;
        for(int i=0;i<M;i++){
            if(num[i].p==j){y1[k]=num[i].y;k++;}
        }
        //cout << k << endl;
        qsort(y1,k,sizeof(int),compare);
        for(int i=0;i<k;i++){
            //cout << y1[i] << endl;
            for(int l=0;l<M;l++){
                if(y1[i]==num[l].y && num[l].p==j)num[l].n = i+1;
            }   
        }
    }

    for(int i=0;i<M;i++){
        num[i].b= num[i].p*1000000+num[i].n;
        printf("%012d\n",num[i].b);
    }

}