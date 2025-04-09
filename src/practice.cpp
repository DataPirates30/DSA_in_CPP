// Let's implement linkedlist 
#include <iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node(int value){
            this->value = value;
            next = nullptr;
        }
};
//The node is created, I am gonna make an object and set the value of that node to the value
//that i entered and set the next value it is poiting to nullptr

// Creating the linkedlist

class LinkedList{
    // My head is going to be private so that it's not gonna mess my linkedlist in the future
    private:
        Node* head;
        
    // I am gonnna set the head as null ptr at the starting of the linkelist
    public:
        LinkedList(){
            head = nullptr;
        }  
        //Function to insert an element entered by an user
        void insertElement(int value){
            Node* new_node = new Node(value);
            //let's check if the head is a null pointer, if yes then my new node is the head
            if(head == nullptr){
                head = new_node;
                return;
                //If i miss the return then head-> next is gonna be the head itself in the second itertaion
                //Thus an infinite loop
            }
            Node* temp = head;
            //if temp-> next that is the current node is null then insert the node at that place
            while(temp->next!= nullptr){
                temp = temp->next;
            }
            temp->next  = new_node;
        }

        void displayElement(){
            if(head == nullptr){
                cout<<"List is empty"<<endl;
                return;
            }
            Node* current  = head;
            while(current->next != nullptr){
                cout<<current->value<<"->";
                current = current->next;
            }
            cout<<current->value<<"->";
            cout<<"null"<<endl;
            return;
        }

        //Function to delete an element from a linkedlist
        void deleteElement(int value){
            if(head == nullptr){
                cout<<"The list is empty"<<endl;
                return;
            }
            //If the first value is in the head itself
            if(head->value == value){
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }
            //Now traversing through the list and deleting the element
            Node* previous = nullptr;
            Node* current  = head;

            while(current != nullptr && current->value !=value ){
                previous = current;
                current = current->next;
            }

            if(current!=nullptr){
                previous->next = current->next;
                delete current;
            }
            else{
                cout<<"Value not found"<<endl;
                return;
            }
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
    l1.insertElement(80);

    l1.displayElement();

    int input_val;
    cout<<"Enter a value to delete fromn the linkedlist"<<endl;
    cin>>input_val;

    //Function call to delete the element from the linkedlist

    l1.deleteElement(input_val);

    l1.displayElement();

    return 0;
}
