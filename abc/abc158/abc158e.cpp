#include <bits/stdc++.h>
using namespace std;


int main() {

    int n,p;
    string s;
    istringstream ss1;
	unsigned long long p1;
  
    cin >> n >> p >> s;
    
    int count =0;
    for (int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            string s1=s.substr(j, i);
            if (i<=18){
                ss1 = istringstream(s1);
                ss1 >> p1;
                count += (p1%p==0);
            }else {
                int index=0;
                int flag =0;
                int leng = 17;
                int tmp=0;
                while(!flag){
                    if(i-index<17){
                        flag=1;
                        leng = i - index;
                    }
                    string s2= s1.substr(j+index,leng);
                    ss1 = istringstream(s2);
                    ss1 >> p1;
                    p1 = tmp*pow(10,leng)+p1;
                    // cout <<p1<<endl;
                    tmp = p1%p;
                    index += leng;
                }
                count += (tmp%p==0);
            }
        }
    }


    cout << count << endl;
    
}