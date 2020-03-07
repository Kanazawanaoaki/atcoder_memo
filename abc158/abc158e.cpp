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
                int tmp=0;
                while(!flag){
                    string s2;
                    if(i-index<17){
                        flag=1;
                        s2= s1.substr(j+index,i-index);
                    }else{
                        s2= s1.substr(j+index,17);
                    }
                    ss1 = istringstream(s2);
                    ss1 >> p1;
                    p1 = tmp*1000000000000000000+p1;
                    cout <<p1<<endl;
                    tmp = p1%p;
                    index += 17;
                }
                count += (tmp%p==0);
            }
        }
    }


    cout << count << endl;
    
}