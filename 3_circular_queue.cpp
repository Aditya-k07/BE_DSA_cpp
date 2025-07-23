#include <iostream>
using namespace std;
class Cqueue{
public:
    int* arr;
    int cfront,crear,size;
    Cqueue(){
        size = 100;
        arr = new int[size];
        cfront = crear = -1;
    }
    bool isempty(){
        if(cfront == crear) return 1;
        else return 0;
    }
    void enqueue(int data){
        if(crear == size-1 && cfront == 0 || crear == (cfront-1) % size){
            cout << "Overloaded";
            return;
        }
        else if(cfront == -1){
            cfront = crear = 0;
            arr[cfront] = data;
        }
    }
    void dequeue(){
        if(isempty() == 1){
            cout << "Empty";
            return ;
        }
        
    }
    void front(){

    }
    void rear(){

    }
};
int main(){


    return 0;
}