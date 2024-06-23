#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.front();
    q.back();
    q.pop();
    q.front();
}