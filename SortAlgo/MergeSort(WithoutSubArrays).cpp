#include<iostream>
using namespace std;

void Merge(int arr[], int left, int mid, int right){
    int i = left, j = mid + 1, k = left;
    int brr[left+right+1];
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            brr[k] = arr[i];
            i++;
        }
        else{
            brr[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        brr[k]=arr[i];
        i++;
        k++;
    }
    while(j<=right){
        brr[k]=arr[j];
        j++;
        k++;
    }
   

    for(i=left;i<=right;i++){
        arr[i]=brr[i];
    }

}

void MergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = (left + right)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}

void PrintArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, i;
    cout << "Enter the Size of the array: ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Initial Array : ";
    PrintArray(arr,n);

    MergeSort(arr,0,n-1);

    cout << "Sorted Array : ";
    PrintArray(arr,n);

    return 0;
}