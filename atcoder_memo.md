# AtCoder memo

## メモ
最初のおまじない。  
```C++
#include <bits/stdc++.h>
using namespace std;

int main() {
}
```
入力、出力
```C++
int n,k;
cin >> n >> k;
cout << n << " " << k << endl;
```

### 配列
vector  
```C++
vector<int> a(n);
for (int i = 0; i < n; i++) {
  cin >> a[i];
}
```

末尾に追加
```C++
a.push_back(2);
```

ソート
```C++
sort(a.begin(),a.end());
```

### 文字列
```C++
string s;
```

### map
辞書的に使われる。
```C++
map<string,int> s;
for (int i=0;i<n;i++){
    string s1;
    cin >> s1;
    s[s1]++;
}

//二つ目の最大値
int maxn = s.rbegin()->second;

//for文で回す。
for (auto x : s){
  if (x.second == maxn){
      cout << x.first << " " << x.second << endl;
  }
}
```



## その他
for文  
```C++
if (条件式1) {
  処理1
}
else if (条件式2) {
  処理2
}
else {
  処理3
}
```

while文  
```C++
while (条件式) {
  処理
}
```