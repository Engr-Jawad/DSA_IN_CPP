#include<iostream>
using namespace std;
void selection_sort(int arr[],int size){
    for (int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int size;
    cout<<"enter size of the array : ";
    cin>>size;
    int arr[size];
   
    for (int i=0;i<size;i++){
         cout<<"enter elements of the array : ";
        cin>>arr[i];
    }
    selection_sort(arr,size);
    cout<<"sorted array is : ";
    for (int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}