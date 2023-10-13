#include<iostream>
using namespace std;
int main(){
    int i,n,k,j;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=1;i<n;i+=2){
        k=arr[i];
        j=i-2;
            while(k < arr[j] && j >= 0){
                arr[j+2] = arr[j];
                j-=2;
            }
            arr[j+2]=k;
        }
       for(i=0;i<n;i+=2){
        k=arr[i];
        j=i-2;
            while(k > arr[j] && j >= 0){
                arr[j+2] = arr[j];
                j-=2;
            }
            arr[j+2]=k;
        }
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}