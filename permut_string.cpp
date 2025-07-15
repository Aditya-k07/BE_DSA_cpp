#include <iostream>
#include <vector>
using namespace std;
void solution(string s, vector<string> &q, int index = 0){
    // base case
    if(index == s.length()){
        q.push_back(s);
        return;
    }
    // recursive cond
    for(int i = index; i< s.length(); i++){
        swap(s[i],s[index]);
        solution(s,q,index+1);
        swap(s[i],s[index]);
    }
}
int main(){
    string s = "abc";
    vector<string> q;
    solution(s, q);
    for(auto i : q) cout << i << " ";
    return 0;
}