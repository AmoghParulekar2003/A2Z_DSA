// 3,1,2,4,1,5,2,6,4

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }
}

void merge_sort(vector<int> &arr, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);

    merge(arr, low, mid, high);
}

int main() {

    //Initialize and take array from user
    int n;
    cout<<"Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter array elements\n";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;

    //Call the Merge Sort function;
    merge_sort(arr, low, high);

    //Print the sorted array
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}