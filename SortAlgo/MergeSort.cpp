#include<iostream>
using namespace std;

void Merge(int arr[], int left, int mid, int right){
    int i = left, j = mid + 1, k = left;
    

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

    MergeSort(arr,0,n+1);

    cout << "Sorted Array : ";
    PrintArray(arr,n);

    return 0;
}