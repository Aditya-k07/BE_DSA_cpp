#include <iostream>
#include <vector>
using namespace std;
void key_seq(string s, string wt[], vector<string> &ans, int temp = 0, string l = ""){
    //base case
    if(temp >= s.length()){
        ans.push_back(l);
        return;
    }
    //recursive relation
    int z = s[temp] - '0';
    string val = wt[z];
    for(int i = 0 ; i < val.length(); i++){
        l.push_back(val[i]);
        key_seq(s,wt,ans,temp+1,l);
        l.pop_back();
    }
}
int main(){
    string s = "34";
    string wt[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    if(s == ""){
        cout << "";
        return 0;
    }
    key_seq(s,wt,ans);

    for(auto i : ans) cout << i << " ";

    return 0;
}