#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    for(int i = 0; i <= n-1; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }

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
    insertion_sort(arr, n);

    //Print the sorted array
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}