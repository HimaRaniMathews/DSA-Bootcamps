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
    int max=0,min=100;
    for (int i = 0; i < n; i++){
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    cout<<"Largest Element : "<<max<<"\nSmallest Element : "<<min;
    return 0;
}