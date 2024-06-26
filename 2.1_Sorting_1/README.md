# Step 2 : Lecture 1 -> Sorting part-1

# Selection Sort
Basic Idea is to "SELECT" the minimum element and swap positions accordingly
<pre>
for(i = 0; i <= n-2; i++) {
    min = i; 
    for(j = i; j <= n-1; j++) {
        if(arr[j] < arr[min]) min = j
    }
    swap(arr[min], arr[i]);
}
</pre>

1. Outer For Loop -> Marks the sorted array's last element. Iterate the loop until the second last element of array as automatically las element will be sorted.
<br>
2. Lets consider ith element as min element
<br>
3. Inner For Loop -> Iterates through the unsorted array to find the minimum element.
<br>
4. Mark the jth element as min element
<br>
5. swap the ith the element with the marked min element.