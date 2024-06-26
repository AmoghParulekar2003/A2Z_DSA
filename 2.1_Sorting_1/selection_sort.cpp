#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[min]) min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {

    //Initialize and take array from user
    int n;
    cout<<"Enter size of array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter array elements\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    //Call the selection Sort function;
    selection_sort(arr, n);

    //Print the sorted array
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}