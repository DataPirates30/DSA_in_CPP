#include <iostream>

using namespace std;

void pointers(){
    // Pointers are the data type that stores the memory address of another variable.
    int a = 10;
    cout<<"Address of a: "<<&a<<endl;

    int *ptr = &a;
    cout<<"Address of a using a pointer: "<<ptr<<endl;

    cout<<"Address of the pointer:"<<&ptr<<endl;
    int** ptr1 = &ptr;

    cout<<"Address of the pointer using a pointer: "<<ptr1<<endl;

    int*** ptr2 = &ptr1;
    int ****ptr3 = &ptr2;
    cout<<"Address of pointer 2:"<<&ptr2<<endl;
    cout<<"Address of the pointer2 using a pointer:"<<****ptr3<<endl;
}

// A function can return pointer and following this same concept we can create an array in heap.
int* returnPointer(){
    int a = 10;
    cout<<"Address of a inside returnPointer: "<< &a <<endl;
    int *ptr = &a;
    return ptr;
}

void stackVsHeap(){
    // Arrays are stored in stack by default but 
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int *ptr =new int[size];
    for(int i=0; i<size; i++){
        ptr[i] = i;
    }
    // Displaying the array
    for(int i=0; i<size; i++){
        cout<<ptr[i]<<endl;
    }
    cout<<"Getting the value before deleting the pointer: "<<*ptr<<endl;;
    // Deleting the array
    delete[] ptr;
    cout<<"Getting the value after deleting the pointer: "<<*ptr<<endl;//Undefined behavior
}
int* create1Darray(int size){
    int* ptr = new int[size];
    return ptr;
}

// void display1Darray(int arr,int size){
//     for(int i = 0;i<size;i++){
//         cout<<"Val "<<i+1<<": "<<arr[i]<<endl;
//     }
// }

void creatingAndShow1Darray()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int* oned_arr = create1Darray(size);
    for(int i = 0; i< size;i++){
        oned_arr[i] = i + 1;
    }
    // Displaying the array
    // display1Darray(oned_arr,size);
    for(int i = 0;i<size;i++){
        cout<<"Val "<<i+1<<": "<<oned_arr[i]<<endl;
    }
    delete[] oned_arr;
    oned_arr= nullptr;
    cout<<oned_arr<<endl;
}

void creating2Darray(){

}

void creating3Darray(){

}


int main()  
{
    // returnPointer();
    // pointers();
    // stackVsHeap();
    creatingAndShow1Darray();
    return 0;
}

