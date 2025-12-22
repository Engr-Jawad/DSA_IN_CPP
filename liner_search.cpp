#include<iostream>
using namespace std;
int liner_search(int arr[],int n,int target){
    for (int i=0;i<n;i++){
        if (arr[i] == target){
            cout<<"target found at index "<<i<<endl;
           
        }
    }
    cout<<"target not found"<<endl;
     return 2;
}
int main(){
    int n=7;
    int arr[n]={3,5,7,5,1,8};
    int target=1;
    liner_search(arr,n,target);
    return 0;
}