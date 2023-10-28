#include<iostream>
using namespace std;
void BubbleSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int swapped = 0; 
        for(int j=0;j<(size-i);j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
                swapped++;
            }
        }
        if(swapped==0){
            cout << "Array - Already Sorted!" << endl;
            break;
        }
    }
}
void PrintArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
}
int main(){
    int n,i,j;
    cout << "Enter the Size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array : " << endl;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Initial array : ";
    PrintArray(arr,n);
    BubbleSort(arr,n);

    cout << "Sorted array: ";
    PrintArray(arr,n);

    return 0;
}

// Time Complexity: O(N^2)
// Auxiliary Space: O(1)


// Total no. of passes: n-1
// Total no. of comparisons: n*(n-1)/2
