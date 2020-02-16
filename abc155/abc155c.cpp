#include <bits/stdc++.h>
using namespace std;

template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
    vector.erase(vector.begin() + index);
}
int main() {
    int n;

    vector<string> s(n);
    vector<string> s1;
    vector<int> n1;
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
        if (find(s1.begin(), s1.end(), s.at(i)) == s1.end()){
            s1.push_back(s.at(i));
        }
    }

    for (int i=0;i<s1.size();i++){
        n1.push_back(count(s.begin(), s.end(), s1.at(i)));
    }

    int prev =0;
    vector<string> ans;
    while(1){
        vector<int>::iterator maxIt = max_element(n1.begin(), n1.end());
        size_t maxIndex = distance(n1.begin(), maxIt);
        cout << maxIndex << endl;
        cout << 11 <<endl;
        if(n1[maxIndex]<prev){
            cout << 12 <<endl;
            break;
        }
        cout << 13 << endl;
        ans.push_back(s1.at(maxIndex));
        prev=n1.at(maxIndex);
        remove(n1, maxIndex);
        remove(s1,maxIndex);
    }

    sort(ans.begin(),ans.end());
    for (int i =0 ;i<ans.size();i++){
        cout << ans.at(i) << endl;
    }
    

}