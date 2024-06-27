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