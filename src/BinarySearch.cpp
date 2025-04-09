// #include <iostream>
// using namespace std;

// bool isAscending(int arr[]){
//     if(arr[0]<arr[1]) return true;
//     return false;
// }

// int binarySearch(int arr[],int size , int key){
    
//     int start = 0;
//     int end = size -1 ;
//     int mid = (start+end)/2;
//     int count =1;
//     while(start<=end){
//         // Checking if the key is equal to the middle val
//         if(key == arr[mid]){
//             return mid;
//         }

//         //If arr is in ascending order
//         if(isAscending(arr)){
//             if(key< arr[mid])
//                 end = mid -1;
//             else
//                 start = mid+1;
//         }
//         //If it is in Descending order
//         else{
//             if(key<arr[mid])
//                start = mid+1;
//             else
//                 end = mid-1;
//         }
//         mid = (start+end)/2;
//         cout<<"Attempt : "<<count<<endl;
//         count++;
//     }
//     return -1;
// }

// void selectionSort(int arr[],int size){
//     // Performing selection sort
//     for(int i = 0;i<size-1;i++){
//         int min = i;
//         for(int j= i+1;j<size;j++){
//             if(arr[min]>arr[j]){
//                 min = j;
//             }
//         }
//         swap(arr[i],arr[min]);
//     }
// }

// void insertionSort(int arr[],int size){
//     //Performing insertionSort
//     for(int i =1;i<size-1;i++){
//         int temp = arr[i];
//         int j = i-1;
//         while(j>=0 && arr[j]>temp){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
//     }
// }


// int main(){
//     // int even_arr[] = {1,3,4,5,6,7};
//     // int odd_arr[] = {4,6,7,8,9};
//     // int descend_arr[] = {5,4,3,2,1};
//     // cout<<"Index of 5 in even_arr is:"<<binarySearch(even_arr,6,5);
//     // cout<<"Index of 5 is descending arr is:"<<binarySearch(descend_arr,5,5)<<endl;

//     int arr[] = {6,7,9,2,4,1};
//     selectionSort(arr,6);
//     insertionSort(arr,6);
//     for(int i = 0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }

//    return 0;
// }