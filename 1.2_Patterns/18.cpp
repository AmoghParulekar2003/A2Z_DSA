/*
E
D E
C D E
B C D E
A B C D E
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 69; i > 64; i--) {
        for(int j = 69-(69-i); j < 70; j++) {
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}