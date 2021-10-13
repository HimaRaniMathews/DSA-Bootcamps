#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter size of array : ";
    cin >>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n ;i++){  
        cin>>arr[i];
    }
    cout<<"Printing Negative Elements: ";
    for (int i = 0; i < n; i++){
        if(arr[i]<0)
        cout<<arr[i]<<" ";
    }
    return 0;
}