# Step 2 : Lecture 1 -> Sorting part-1

# Selection Sort
Basic Idea is to "SELECT" the minimum element and swap positions accordingly with the front.
<pre>
for(i = 0; i <= n-2; i++) {
    min = i; 
    for(j = i; j <= n-1; j++) {
        if(arr[j] < arr[min]) min = j
    }
    swap(arr[min], arr[i]);
}
</pre>
<br>
1. Outer For Loop -> Marks the sorted part of array's last element. Iterate the loop till the second last element of array as automatically last element will be sorted.
<br>
2. Lets consider ith element as min element
<br>
3. Inner For Loop -> Iterates through the unsorted part of array to find the minimum element.
<br>
4. Mark the jth element as min element
<br>
5. swap the ith the element with the marked min element.

# Bubble Sort
Basic idea is to compare adjacent elements forming a "BUBBLE" and keep the larger element on the right side
<pre>
for(i = n-1; i > 0; i--) {
    for(j = 0; i < i; j++) {
        if(a[j] > a[j+1]) swap
    }
}
</pre>
<br>
1. Outer For Loop -> Marks the sorted part of array's 1st element. Iterate the loop until it reaches the 1st element which gets sorted automatically.
<br>
2. Inner For Loop -> Iterate through the unsorted part of array and check if the second element is greater than first, if false, swap them.
