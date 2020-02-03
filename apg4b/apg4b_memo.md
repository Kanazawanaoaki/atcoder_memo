# APG4bメモ

最初のおまじない
```C++
#include <bits/stdc++.h>
using namespace std;

int main() {
}
```
 
## キーポイント
### 第一章 
・#include <bits/stdc++.h>とusing namespace std;はとりあえず毎回最初に書く  
・C++のプログラムはmain関数から始まる  
・cout << "文字列" << endl;で文字列を出力できる  
・//や/* */でコメントを書ける  

・cin >> 変数 で入力を受け取ることができる  
・スペースと改行で区切られて入力される  
・if文書き方 かつ：&&　または：||
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
・{}で囲まれた範囲がブロック。変数のスコープを考える。  
・while文  
```c++
while (条件式) {
  処理
}
```
・break文とcontinue文(repマクロというのもあるらしい)  
・文字列変数.size()で文字列の長さを取得できる  
・文字列変数.at(i)でi文字目にアクセスできる  
・"moji"の文字列は一度変数に格納するか、"文字列"s.size()とsを末尾につける必要あり  
・getline(cin, 文字列変数); で一行ごと入力。  

・vector<型> 配列変数名;で配列変数を宣言できる  
・配列変数名 = { 要素1, 要素2, ... };で配列変数に値を代入できる  
・配列変数.at(i)でi番目の要素にアクセスできる。配列変数[添字]もほぼ同じ  
・配列変数.size()で配列の要素数を取得できる  
・vector<型> 配列変数名(要素数)と書くと指定した要素数で配列を初期化できる  
```C++
vector<int> vec(N);
for (int i = 0; i < N; i++) {
  cin >> vec.at(i);
}
```
・配列変数.push_back(値) で配列の末尾に要素を追加  
・配列変数.pop_backを() で配列の末尾の要素を削除

vector<int> data(3); // vectorによる配列  
int data[3]; // Cの配列  
array<int, 3> data; // arrayによる配列  

・STL C++で用意されている関数等  
min(a, b):aとbのうち小さい方の値を返す  
max(a, b):aとbのうち大きい方の値を返す  
swap(a, b):変数aと変数bの値を交換する  
sort(vec.begin(), vec.end()):配列変数vecをソートする（要素を小さい順に並び替える）  
reverse(vec.begin(), vec.end()):配列変数vecの要素の並びを逆にする  

## 細かい話
・#include <bits/stdc++.h> は、C++の機能を全て読み込むための命令！coutとかendlとか  
・using namespace std; は、C++の機能を使うにはstd::〜としないといけないところを名前空間を設定してstd::を省略できるようにするもの。  


