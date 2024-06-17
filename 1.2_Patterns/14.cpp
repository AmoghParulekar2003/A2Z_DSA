/*
A
A B
A B C
A B C D
A B C D E
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 65; i < 70; i++) {
        for(int j = 65; j <= i; j++) {
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }
}