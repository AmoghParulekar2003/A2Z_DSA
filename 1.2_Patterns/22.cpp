/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num = 4;
    for(int i = 0; i < 2*4-1; i++) {
        for(int j = 0; j < 2*4-1; j++) {
            int top = i;
            int bottom = j;
            int right = (2*4-2)-j;
            int left = (2*4-2)-i;
            cout<<(4-min(min(top,bottom), min(left,right)))<<" ";
        }
        cout<<"\n";
    }
}