#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp1;
    map<int, pair<int,int>> mp2;
    map<pair<int,int>, int> mp3;

    mp1[1] = 2;
    mp1.emplace(2,4);
    mp1.insert(3,1);
    mp3[{2,3}] = 10;

    map<int,int> mp4 = {
        {1,2},
        {2,4},
        {3,1}
    };
    
    for(auto it: mp1) {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mp1[1];
    cout<<mp1[5];

    auto it1 = mp1.find(3);
    //cout<<*(it1).second;
}