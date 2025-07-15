#include <iostream>
#include <vector>
using namespace std;
const int n = 4;
bool check(int newx, int newy, bool hasvisit[][n], bool maze[][n]){
    if((newx < 0 && newx >= n || newy < 0 && newy >= n) && hasvisit[newx][newy] == 1 && maze[newx][newy] == 0) return 0;
    else return 1;
}

void solve(bool maze[][n], int newx, int newy, string path, bool hasvisit[][n], vector<string> &ans){
    //base case
    if((newx == n-1) && (newy == n-1)){
        ans.push_back(path);
        return;
    }
    hasvisit[newx][newy] = 1;

    // recursive cases
    // if down
    newy++;
    if(check(newx, newy, hasvisit, maze) == 1){
        path.push_back('D');
        solve(maze, newx, newy, path, hasvisit, ans);
        path.pop_back();
    }

    // if right
    newx++;
    if(check(newx, newy, hasvisit, maze) == 1){
        path.push_back('R');
        solve(maze, newx, newy, path, hasvisit, ans);
        path.pop_back();
    }

    // if left
    if(check(newx, newy, hasvisit, maze) == 1){
        path.push_back('L');
        solve(maze, newx, newy, path, hasvisit, ans);
        path.pop_back();
    }

    // if up
    newy--;
    if(check(newx, newy, hasvisit, maze) == 1){
        path.push_back('U');
        solve(maze, newx, newy, path, hasvisit, ans);
        path.pop_back();
    }
    hasvisit[newx][newy] = 0;
}
int main(){
    bool maze[][n] = {{1,1,0,0},{0,1,1,1},{1,0,1,0},{1,1,1,1}};
    string path = "";
    if(maze[0][0] == 0) cout << path;
    int newx = 0;
    int newy = 0;
    bool hasvisit[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++) hasvisit[i][j];
    }
    vector<string> ans;
    solve(maze, newx, newy, path, hasvisit, ans);
    for(auto i : ans) cout << i << " ";

    return 0;
}