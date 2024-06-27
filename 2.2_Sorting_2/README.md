# Step 2 : Lecture 2 -> Sorting Part-2

# Merge Sort

Basic idea is to divide the array into hypothetical sub-arrays until we get single elements, after that "MERGE" the elements into single arrays as we backtrack in the sorted order. It works on the Divide and Merge principle.
<pre>
mergeSort(arr[], low, high) {
    if(low >= high) return;
    mid = (low + high) / 2;
    mergeSort(arr[], low, mid);
    mergeSort(arr[], mid+1, high);
    merge(arr[], low, mid, high);
}
merge(arr[], low, mid, high) {
    temp[];
    left = low;
    right = mid+1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.add(arr[left]);
            left++;
        } else {
            temp.add(arr[right]);
            right++;
        }
    }
    while(left <= mid) {
        temp.add(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.add(arr[right]);
        right++;
    }
    for(i = low -> high) {
        arr[i] = temp[i-low];
    }
}
</pre>
<br>
Time Complexity -> Best Case, Average Case, Worst Case = O(n * log n)
<br>
Space Complexity -> Worst Case = O(n)

# Quick Sort
Quick sort is a divide-and-conquer algorithm that sorts an array by selecting a pivot, partitioning the array around the pivot, and then recursively sorting the subarrays on either side of the pivot.
<pre>
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while(arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low, high);
        quick_sort(arr, low, pIndex - 1);
        quick_sort(arr, pIndex + 1, high);
    }
}
</pre>
<br>
Time Complexity -> O(n * log n)
<br>
Space Complexity -> O(1)