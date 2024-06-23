#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(1,2);

    vector<int> v3(5, 100);
    vector<int> v5(5);

    vector<int> v6(5,20);
    vector<int> v7(v6);

    vector<int>::iterator it1 = v1.begin();
    it1++;
    cout<<*(it1)<<" ";

    it1 += 2;
    cout<<*(it1)<<" ";

    vector<int>::iterator it2 = v1.end();
    
    cout<<v1[0]<<" "<<v1.at(0);
    cout<<v1.back()<<" ";

    for(vector<int>::iterator it2 = v1.begin(); it2 != v1.end(); it2++) {
        cout<<*(it2)<<" ";
    }

    for(auto it2 = v1.begin(); it2 != v1.end(); it2++) {
        cout<<*(it2)<<" ";
    }

    for(auto it2 : v1) {
        cout<<it2<<" ";
    }

    v1.erase(v1.begin() + 1);
    v1.erase(v1.begin() + 2, v1.begin() + 4);

    vector<int> v8(2,100);
    v8.insert(v8.begin(), 300);
    v8.insert(v8.begin()+1, 2, 10);

    vector<int> copy(2,50);
    v8.insert(v8.begin(), copy.begin(), copy.end());
    cout<<v8.size();
    v8.pop_back();
    v3.swap(v6);
    v8.clear();
    cout<<v8.empty();
}