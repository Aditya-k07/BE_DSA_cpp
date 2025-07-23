#include <iostream>
#include <stack>
using namespace std;
class STACK{
public:
    int *arr;
    int top, size;
    STACK(int size){
        top = -1;
        this -> size = size;
        arr = new int[size];
    }
    void push(int data){
        if(top == size-1 ){
            cout << "Stack Overflow";
            return;
        }
        top++;
        arr[top] = data;

    }
    void pop(){
        if(isempty()){
            cout << "Underflow";
            return;
        }
        arr[top]=-1;
        top--;
    }
    void peek(){
        cout << arr[top];
    }
    bool isempty(){
        if(top == -1){
            return 1;
        }
        else return 0;
    }
};
using namespace std;
int main(){
    // STL lib
    stack<int> st;
    cout << st.size();
    cout << st.empty();

    // user defined
    STACK* ST = new STACK(10);
    cout << ST -> isempty();
    
    return 0;
}