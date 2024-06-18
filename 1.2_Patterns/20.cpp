/*
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int spaces = 8;
    for(int i = 1; i <= 5; i++) {
        for(int j = 0; j < i; j++) {
            cout<<"* ";
        }
        for(int j = 0; j < spaces; j++) {
            cout<<"  ";
        }
        for(int j = 0; j < i; j++) {
            cout<<"* ";
        }
        spaces -= 2;
        cout<<"\n";
    }
    spaces = 2;
    for(int i = 4; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            cout<<"* ";
        }
        for(int j = 0; j < spaces; j++) {
            cout<<"  ";
        }
        for(int j = 0; j < i; j++) {
            cout<<"* ";
        }
        spaces += 2;
        cout<<"\n";
    }
    return 0;
}