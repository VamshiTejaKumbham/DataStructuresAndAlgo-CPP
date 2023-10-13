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
    for(i=1;i<n;i++){
        int t = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>t){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = t;
    }
    cout << "Sorted array : ";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}