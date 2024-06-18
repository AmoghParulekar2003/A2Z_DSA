#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p1 = {1, 2};
    cout<<p1.first<<" "<<p1.second<<"\n";

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<"\n";

    pair<int, int> p3[] = {{1,2}, {3,4}, {5,6}};
    cout<<p3[1].second<<"\n";

    return 0;
}