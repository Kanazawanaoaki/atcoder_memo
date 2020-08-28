#include <bits/stdc++.h>
using namespace std;

class t
{
public:
  long num;
  long now;
  int cnt;

  void set(long num);
  void add_cnt();
};

void t::set(long num){
  this->num = num;
  this->now = num;
  this->cnt = 1;
}

void t::add_cnt(){
  this->cnt++;
  this->now = num/cnt;
  if(num%cnt!=0)this->now++;
}

int main() {
  int n;
  long k;
  cin >> n >> k;

  vector<long> a(n);
  vector<t> tmp(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
    tmp[i].set(a[i]);
  }
  
  sort(tmp.begin(), tmp.end(), [ ](const t& lhoge, const t& rhoge){
      return lhoge.now < rhoge.now;
    });
  
  // for(int i=0;i<n;i++){
  //   cout << tmp[i].now << endl;
  // }

  long nowm = 0;
  int count=0;
  for(int i=0;i<k;i++){
    if(count>=k)break;
    tmp[tmp.size()-1].add_cnt();

    // cout << tmp[tmp.size()-1].now << endl;

    count++;
    nowm = tmp[tmp.size()-1].now;
    for(int j=1;j<n;j++){
      if(count>=k)break;
      if(tmp[tmp.size()-1-j].now>nowm){
	while(tmp[tmp.size()-1-j].now>nowm){
	  tmp[tmp.size()-1-j].add_cnt();

	  // cout << tmp[tmp.size()-1-i].now << endl;

	  count++;
	  if(count>=k)break;
	}
      } else {
	break;
      }
    }
    sort(tmp.begin(), tmp.end(), [ ](const t& lhoge, const t& rhoge){
      return lhoge.now < rhoge.now;
      });

    // cout << endl;
    // for(int j=0;j<n;j++){
    //   cout << tmp[j].now << endl;
    // }
    
    if(count>=k)break;
  }

  // for(int i=0;i<n;i++){
  //   cout << tmp[i].now << endl;
  // }

  sort(tmp.begin(), tmp.end(), [ ](const t& lhoge, const t& rhoge){
      return lhoge.now < rhoge.now;
    });
  
  cout << tmp[tmp.size()-1].now << endl;
  return 0;
}
