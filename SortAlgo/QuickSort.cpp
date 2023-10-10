#include<iostream>
using namespace std;
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
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(i=0;i<n;i++){
        for(j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    cout << "Sorted array : ";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity: O(N^2)
// Auxiliary Space: O(1)


// Total no. of passes: n-1
// Total no. of comparisons: n*(n-1)/2
