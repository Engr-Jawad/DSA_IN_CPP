#include<iostream>
using namespace std;

int partition(int arr[],int start_indx,int endx){
    int i = start_indx -1 ;
    int pivot = arr[endx];
    for (int j=start_indx;j<endx;j++){
        if (arr[j] <= pivot){
            i++;
            swap(arr[j],arr[i]);
        }

    }
    i++;
    swap(arr[endx],arr[i]);
    return i;

}
void quick_sort(int arr[],int start_indx,int endx){
    if (start_indx < endx){
        int pivote = partition(arr,start_indx,endx);
        quick_sort(arr,start_indx,endx-1);
        quick_sort(arr,pivote+1,endx);

    
    }
}
int main(){
    int size=5;
    int arr[size]={9,3,6,1,8};
    quick_sort(arr,0,size-1);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}