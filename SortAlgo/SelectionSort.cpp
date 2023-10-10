#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array : " << endl;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Initial array : ";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    cout << "Sorted array : "; 
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}

// Time Complexity : O(N^2)
// Auxiliary Space: O(1)