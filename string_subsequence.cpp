#include <iostream>
//#include <cstring>
#include <vector>
using namespace std;
void subseq(vector<string>& s, string k, int index, string tem){
    if(index == k.length()){
        s.push_back(tem);
        return;
    }
    // exclude
    subseq(s, k, index+1, tem);
    // include
    char temp = k[index];
    tem.push_back(temp);
    subseq(s, k, index+1, tem);
}
int main(){
    string k = "abc";
    string tem = "";
    int index = 0;
    vector<string> s;
    subseq(s, k, index, tem);
    for(auto i : s) cout << i << " ";
    return 0;
}