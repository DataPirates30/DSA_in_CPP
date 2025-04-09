#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int value){
            this->value = value;
            this-> next = nullptr;
        }
};//Now the node has been created, let's focus on the linkedlist now

class LinkedList{
    private:
        Node* head;

    public:
        LinkedList(){
            head = nullptr;
        }

        void insertElement(int value){
            Node* newNode = new Node(value);

            if(head == nullptr){
                head = newNode;
                return;
            }

            Node* temp = head;
            while(temp->next!= nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }

        void displayElements(){
            Node* temp = head;
            while(temp!= nullptr){
                cout<<temp->value<<"->";
                temp =  temp->next;
            }
            cout<<"null"<<endl;
        }

        void Deletion(int value){
            Node* temp = head;
            while(temp!=nullptr){
                if(temp->next!=nullptr && temp->value == value){
                    cout<<"Value found";
                }
                temp = temp->next;
            }
            cout<<"Element doesn't exist in the list"<<endl;
        }
};


int main(){
    LinkedList l1;
    l1.insertElement(10);
    l1.insertElement(20);
    l1.insertElement(30);
    l1.insertElement(40);
    l1.insertElement(50);
    l1.insertElement(60);
    l1.insertElement(70);
    l1.insertElement(90);

    l1.displayElements();

    int value;

    cout<<"Enter an element to delete: ";
    cin>>value;

    l1.Deletion(value);
    l1.displayElements();
    return 0;
}