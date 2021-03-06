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

//末尾の要素を除く
a.pop_back();

//昇順ソート
sort(a.begin(),a.end());

//降順のソート
sort(a.begin(),a.end(),greater<int>());
sort(a.rbegin(), a.rend());

//絶対値が小さい順にソート
sort(a.begin(), a.end(), [](int x, int y) {
	return abs(x) < abs(y);
});


//要素数
a.size();
// std::size_t size = a.size();
```
[配列の最大など](https://riptutorial.com/ja/cplusplus/example/11151/%E3%83%99%E3%82%AF%E3%83%88%E3%83%AB%E3%81%AE%E6%9C%80%E5%A4%A7%E3%81%A8%E6%9C%80%E5%B0%8F%E3%81%AE%E8%A6%81%E7%B4%A0%E3%81%A8%E3%81%9D%E3%82%8C%E3%81%9E%E3%82%8C%E3%81%AE%E3%82%A4%E3%83%B3%E3%83%87%E3%83%83%E3%82%AF%E3%82%B9%E3%82%92%E8%A6%8B%E3%81%A4%E3%81%91%E3%82%8B)
```c++
std::vector<int> v = {5, 2, 8, 10, 9};
int maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
int maxElement = *std::max_element(v.begin(), v.end());

int minElementIndex = std::min_element(v.begin(),v.end()) - v.begin();
int minElement = *std::min_element(v.begin(), v.end());

std::cout << "maxElementIndex:" << maxElementIndex << ", maxElement:" << maxElement << '\n';
std::cout << "minElementIndex:" << minElementIndex << ", minElement:" << minElement << '\n';
```

2次元配列  
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
多次元配列
```C++
vector<vector<vector<long long>>> s(R, vector<vector<long long>>(C ,vector<long long>(K)));
for(int i=0;i<R;i++){
  for(int j=0;j<C;j++){
    for(int k=0;k<K;k++){
      cout << s[i][j][k];
    }
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

## MOD
```C++
using ll = long long;
const int mod = 1000000007;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}

// 使用例
mint ans = 1;
ans *= 5;
```
