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

# Deques
<pre>
deque dq;
dq.pop_front();
dq.front();
dq.back();
</pre>
rest all functions are same as vectors

# Stacks
<pre>
stack st;   //initialize
st.push();  //push element
st.pop();   //pop elememt
st.top();   //points to top element
</pre>
Follows Last In First Out (LIFO)

# Queues
<pre>
queue q;    //initialize
q.push();   //push element
q.pop();    //pop first element
q.front();  //points to first element
q.back();   //points to last element
</pre>
Follows First In First Out (FIFO)

# Priority Queues
<pre>
priority_queue pq;  //initialize (max heap)
pq.push();          //push element
pq.pop();           //pop element
pq.top();           //top element

priority_queue(int, vector(int), greater(int))    //initialize (min heap)
</pre>
p.s. use "<>" in place of () in code
Just like queues, but are stores values in heap i.e the values will be stored in ascending or descending order

# Sets
<pre>
set st;        //initialize
st.insert();   //insert element in set
st.erase();    //erase element from set
st.find();     //find element in set
</pre>
Set is a container where it only stores Unique values and the values are in sorted order

# Multisets
<pre>
multiset ms;   //initialize
ms.insert();   //insert
ms.erase();    //delete
ms.find();     //search
ms.count()     //count the occurence
</pre>
Multisets are basically sets but can have multiple same values i.e it does not store unique values only. But they are sorted.