#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum = 0;
  vector<int> an(N);
  for (int i = 0; i < N; i++){
      cin >> an.at(i);
      sum += an.at(i);
  }
  int avg = sum / N;

  int num = 0;
  for (int i = 0; i < N; i++){
      num = an.at(i)-avg;
      if (num<0) num *= -1;
      cout << num << endl;
  }
}
