#include<iostream>
using namespace std;

void Merge(int arr[],int left, int mid, int right){
    // Initializing the sizes for the Sub-Arrays
    int n1 = (mid-left)+1;
    int n2 = (right - mid);

    // Init-the-Sub-Arrays
    int L[n1], R[n2];

    // Load-Elements-into-the-Sub-Arrays
    for(int i=0;i<n1;i++){
        L[i]=arr[left + i];
    }
    for(int i=0;i<n2;i++){
        R[i] = arr[(mid+1) + i];
    }

    // Compare-Left-and-Right-Sub-Arrays-and-Merge
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    // if-Elements-left-in-either-of-the-Sub-Arrays
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int left,int right){
    if(left<right){
        int mid = (left+right)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}

void PrintArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int n,i;
    cout <<"Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array elements: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "Initial Array : ";
    PrintArray(arr,n);

    MergeSort(arr,0,n-1);

    cout << "Sorted Array: ";
    PrintArray(arr,n);

    return 0;
}