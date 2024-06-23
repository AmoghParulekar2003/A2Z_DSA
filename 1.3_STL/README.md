# Step 1: Lecture 3 -> STL (Standard Template Library)

Divided in 4 parts:
1. Containers
2. Algorithms
3. Functions
4. Iterators

# Pairs
<pre>
pair p1 = {1,3}
pair p2 = {1, {2,3}}
pair p3[] = {{1,2}, {3,4}, {5,6}}
</pre>

Use p1.first or p1.second to access the elements


# Vectors
<pre>
vector v;        //initialize vector
v.push_back(3);  //push element at end of vector
v.pop_back();    //pop the last element
v.begin();       //points to the first element of vector
v.end();         //points to the space after the last element of vector
v.erase();       //deletes the element
v.insert();      // insert the element
v.swap();        //swap elements to two vectors
v.clear();       //empty the entire vector
v.empty()        //returns boolean value whether vector is empty of or not
</pre>

# Lists
<pre>
list ls;            //initialize list
ls.push_front();    //push element at front of list
ls.emplace_front(); //emplace element at front of list
</pre>
rest all functions are same as vectors