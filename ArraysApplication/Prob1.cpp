#include<iostream>
using namespace std;
int MAX_SUB=100;
int MAX_STUD=100;
int main(){
    int stud,sub,i,j,avg=0;
    cout << "Enter total number of students : ";
    cin >> stud;
    cout << "Enter total number of subjects : ";
    cin >> sub;
    int arr[stud][sub];
    int avgArr[stud];
    for(i=0;i<stud;i++){
        for(j=0;j<sub;j++){
            cin >> arr[i][j];
        }
    }
    for(i=0;i<stud;i++){
        for(j=0;j<sub;j++){
            avg=avg+arr[i][j];
        }
        avgArr[i]=avg/sub;
    }
    for(i=0;i<stud;i++){
        cout << avgArr[i];
    }

    return 0;
}
