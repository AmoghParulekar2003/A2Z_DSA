#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    pq.top();
    pq.pop();
    pq.top();

    priority_queue<int, vector<int>, greater<int>> pqm;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    pq.top();
    pq.pop();
    pq.top();
}