#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertathead(node* &head, int data){
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}
void printLL(node *head){
    while(head){
        cout << head -> data << " ";
        head = head->next;
    }
    cout << endl;
}
void insertatail(node* &t, int data){
    //while(temp->next != NULL) temp = temp -> next;
    node *tail = new node(data);
    t->next = tail;
    t = tail;
}
void insertmid(node* &head, node* &tail, int pos, int data){
    node* temp = new node(data);
    node* temp2 = head;
    if(pos == 1){
        insertathead(head,data);
        return;
    }
    int i = 1;
    while(i < pos-1 && temp2 != NULL ) {
        temp2 = temp2->next;
        i++;
    }
    if(temp2 -> next == NULL ){
        insertatail(tail,data);
        return;
    }
    temp -> next = temp2 -> next;
    temp2 -> next = temp; 
}
int main(){
    node* a = new node(5);
    node* tail = a;
    cout << a->data << " ";
    insertathead(a, 0);
    cout << a->data << endl;
    cout << "The given LinkedList is : ";
    printLL(a);
    insertatail(tail,100);
    printLL(a);
    insertmid(a,tail, 1, 909);
    insertmid(a,tail, 3, 109);
    printLL(a);
    return 0 ;
}