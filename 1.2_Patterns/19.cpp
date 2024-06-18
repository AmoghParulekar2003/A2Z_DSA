/*
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * * 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int spaces = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 1; j <= 5-i; j++) {
            cout<<"* ";
        }
        for(int j = 0; j < spaces; j++) {
            cout<<"  ";
        }
        for(int j = 1; j <= 5-i; j++) {
            cout<<"* ";
        }
        spaces += 2;
        cout<<"\n";
    }

    spaces = 2 * 5 - 2;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<"* ";
        }
        for(int j = 0; j < spaces; j++) {
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++) {
            cout<<"* ";
        }
        spaces -= 2;
        cout<<"\n";
    }
    return 0;
}