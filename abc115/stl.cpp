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

static int compare(const void*a,const void*b){
    int anum = *(int*)a;
    int bnum = *(int*)b;

    return anum - bnum;
}

int main(){
    int h[5] = {6,2,3,4,5};
    
    //sort
    qsort(h,5,sizeof(int),compare);


    cout << h[0] << endl;
}