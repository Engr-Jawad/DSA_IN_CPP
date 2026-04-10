#include<iostream>
#include<vector>
using namespace std;

// time complexity of mege function in wrost case is O(n)
void merge(vector<int> &arr,int st,int mid,int e){
    vector<int> temp;
    int i =st, j=mid+1;
    while(i <=mid  && j <= e){
        if (arr[i] <= arr [j]){
            temp.push_back(arr[i]);
            i++;
        }
        else {
               temp.push_back(arr[j]);
                j++;
            }
        }

    // da landay loop ba aghay poray cahleegee ko zamong na sa element pa left half kay patay sah we yee nu agha ba pa hapal postion banday locate kee
    while (i <= mid){
            temp.push_back(arr[i]);
            i++;
    }
    // da landay loop ba aghay poray cahleegee ko zamong na sa element pa right half kay patay sah we yee nu agha ba pa hapal postion banday locate kee

    while (j <= e){
        temp.push_back(arr[j]);
        j++;
        }

        // da loop ba zamong sara che kam value pa temprory memory kay prata dee nu agha ba orignal array ta pa sahee postion copy kee tik da 
        for (int i=0;i<temp.size();i++){
            arr[st + i]= temp[i];
        }

    }




void merge_sort(vector<int> &arr,int start,int end){
    if (start < end){
        int mid = start + (end - start )/2;   // to find the midle of the array

        merge_sort (arr,start,mid); // calling function recursivley for the left half 

        merge_sort(arr,mid+1,end); // calling function recursively for the right half 
        merge(arr,start,mid,end);
    }
}
int main(){
    
    vector<int>arr = {12,31,35,8,32,17};
    cout<<"unsorted array  : ";
     for (int val : arr){
        cout<<val << " ";
    }
    merge_sort(arr,0,arr.size()-1);
    cout<<"\n sorted array : ";
    for (int val : arr){
        cout<<val << " ";
    }
    
    return 0;
}



