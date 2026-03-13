#include<iostream>
using namespace std;

void selection_sort(int array[],int n){
    for (int i=0; i<n-1;i++){
        int smallestindx=i;
        for (int j=i+1;j<n;j++){
            if (array[j] < array[smallestindx]){
                smallestindx=j;
            }
        }
        swap(array[i],array[smallestindx]);
    }
}

void print(int array[],int n){
    for (int i=0;i<n;i++){
        cout<<array[i];
    }
}

int main(){
    int n;
    cout<<"enter  the size of array : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements in the array : ";
        cin>>array[i];
    }

    selection_sort(array,n);
    print(array,n);
    return 0;


}