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
    int w,h,x,y;
    float area;
    int res=0;

    cin  >> w >> h >> x >> y;

    area = 0.5 * w * h;
    if(x*2==w && y*2 == h)res=1;

    cout << area << " " << res << endl;

    return 0;
}