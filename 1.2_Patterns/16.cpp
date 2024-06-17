/*
A
B B
C C C
D D D D
E E E E E
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 65; i < 70; i++) {
        for(int j = 65; j <= i; j++) {
            cout<<(char)i<<" ";
        }
        cout<<"\n";
    }
}