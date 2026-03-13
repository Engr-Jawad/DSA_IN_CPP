#include<iostream>
using namespace std;
void bubble_sort(int array[],int size){
    for(int i=0;i<size-1;i++){
        for (int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}

void printarray(int array[],int size){
    for (int i=0;i<size;i++){
        cout <<array[i];
    }
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
     int array[n];
    cout<<"enter element in the array : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    bubble_sort(array,n);
    printarray(array,n);
    return 0;
    
}
