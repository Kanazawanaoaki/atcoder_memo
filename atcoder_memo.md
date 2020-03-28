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
[http://vivi.dyndns.org/tech/cpp/vector.html]
vector  
```C++
vector<int> a(n);
for (int i = 0; i < n; i++) {
  cin >> a[i];
}

//末尾に追加
a.push_back(2);

//ソート
sort(a.begin(),a.end());
```

多次元配列  
[https://atcoder.jp/contests/APG4b/tasks/APG4b_t]
```C++
// int型の2次元配列(3×4要素の)の宣言
vector<vector<int>> data(3, vector<int>(4));

for(int i=0;i<h;i++){
  for(int j=0;j<w;j++>){
    cin >> data[i][j];
  }
}
```

### 文字列
[https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3]
```C++
string s;

//文字列のサイズ  
s.size();

//一部を取り出す  
s.substr(3); //n番目以降の文字列を取り出す
s.substr(2,3); //2番目以降の文字列を3文字取り出す
```

### map
[https://qiita.com/_EnumHack/items/f462042ec99a31881a81]
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