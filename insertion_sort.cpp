#include<iostream>
using namespace std;
void insertion_sort(int array[],int n){
    for (int i=1;i<n;i++){
        int current=array[i];
        int previous=i-1;
        while(previous>=0 && array[previous] > current){
            array[previous+1]=array[previous];
            previous--;
        }
        array[previous+1]=current;
    }
    
}

void print(int array[],int n){
    
    for (int i=0;i<n;i++){
        cout<<array[i];
    }
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertion_sort(arr,n);
    print(arr,n);
    return 0;
}