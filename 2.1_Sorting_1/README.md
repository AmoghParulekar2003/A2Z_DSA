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

Outer For Loop -> Marks the sorted array's last element. Iterate the loop until the second last element of array as automatically las element will be sorted.
<br>
Lets consider ith element as min element
<br>
Inner For Loop -> Iterates through the unsorted array to find the minimum element.
<br>
Mark the jth element as min element
<br>
swap the ith the element with the marked min element.