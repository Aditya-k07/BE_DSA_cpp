#include <iostream>
using namespace std;
class queue{
public:
    int size;
    int rear;
    int front;
    int* arr;
    queue(){
        size = 100;
        arr = new int[size];
        front = rear = 0;
    }
    bool isempty(){
        cout << endl;
        if(front == rear) return 1;
        else return 0;
    }
    void enqueue(int data){
        cout << endl;
        if(rear == size-1) {
            cout << "Overloaded";
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
        
    }
    void dequeue(){
        cout << endl;
        if(front == rear){
            cout << "Queue empty";
            return;
        }
        arr[front] = -1;
        front++;
        if(front == rear){
            front = rear = 0;
        }
    }
    void Front(){
        cout << endl;
        if(isempty() == true){
            cout << "Queue empty";
            return;
        }
        cout << arr[front];

    }
    void Rear(){
        cout << endl;
        if(isempty() == true){
            cout << "Queue empty";
            return;
        }
        cout << arr[rear-1];
    }
};
int main(){
    queue a;
    cout << a.isempty();
    a.enqueue(30);
    cout << a.isempty();
    return 0;
}