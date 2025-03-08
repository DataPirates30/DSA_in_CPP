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
    for(int i = 0; i< size;i++){
        ptr[i] =  1;
    }
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
        oned_arr[i] =  1;
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
int** create2Darr(int size_of_row, int size_of_col){
    int** ptr = new int*[size_of_row];
    for(int i = 0;i<size_of_row;i++){
        ptr[i] = create1Darray(size_of_col);
    }
    return ptr;
}

void creatingandDisplay2Darray(){
    // Creating a twod array using pointers
    int size_of_col = 5;
    int size_of_row = 3;
    int** ptr = new int*[size_of_row];
    for(int i = 0;i<3;i++){
        ptr[i] = create1Darray(size_of_col);
    }
    for(int i = 0;i < size_of_row;i++){
        for(int j = 0;j<size_of_col;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void create3Darray(){
    // I have succesfully created 1D and 2D array but it's turn of creating a 3D array
    //3D array has 3 dimenesions
    // Rows,cols, and depth
    int depth_size = 2;
    int row_size = 3;
    int col_size = 5;

    //I am going to construct a 3D array using pointers

    int*** ptr =new int**[depth_size];
    for(int i=0;i<depth_size;i++){
        ptr[i] = create2Darr(row_size,col_size);
    }

    // Displaying 3D array
    for(int i = 0; i<depth_size;i++){
        for(int j = 0;j<row_size;j++){
            cout<<"[";
            for(int k= 0;k<col_size;k++){
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<"]";
        }
        cout<<endl;
    }

}

void nthD_array(){
    cout<<"Hello world"<<endl;
}



int main()  
{
    // returnPointer();
    // pointers();
    // stackVsHeap();
    // creatingAndShow1Darray();
    // // creating2Darray();
    // create3Darray();

    nthD_array();
    // Creatiung a nth dimension array is really hard

    return 0;
}

