#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2); //won't insert 2 again
    st.insert(4);
    st.insert(3);

    auto it = st.find(3);
    auto it = st.find(6); //returns set.end()

}