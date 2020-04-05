#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

bool numc(string ns){
  int size = ns.size();
  int tmp = ctoi(ns[0]);
  for(int i=1;i<size;i++){
    int tmp1 = ctoi(ns[i]);
    if(tmp-1==tmp1 || tmp==tmp1 || tmp+1==tmp1){
      tmp =tmp1;
      continue;
    }else{
      return false;
    }
  }
  return true;
}

int main() {


    long k;
    cin >> k;

    if(k<=10){
      cout << k<< endl;
      return 0;
    }

    // cout << 1 << endl;
    long num =10;
    long cnt =10;
    string ns = to_string(num);
    while(cnt<k){
      int len = ns.size();
      // cout << ctoi(ns[len-2])-ctoi(ns[len-1]) << " " << ctoi(ns[len-2]) << " " << ctoi(ns[len-1]) << endl;
      if(ctoi(ns[len-2])==9&&ctoi(ns[len-1])==9){
        // cout << 2 << endl;
        num++;
        continue;
      }
      // cout << num << endl;
      if(ctoi(ns[len-2])-ctoi(ns[len-1])==1){
        num+=1;
      }else if (ctoi(ns[len-2])-ctoi(ns[len-1])==0){
        num+=1;
      }else{
        num+=9;
      }
      // cout << num << endl;
      ns = to_string(num);
      // cout << ns << " "<< numc(ns) << endl;
      if(numc(ns)){
        cnt++;
      }

    }

    cout << num << endl;

}
