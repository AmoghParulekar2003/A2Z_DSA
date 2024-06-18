/*
* * * *

*     *

*     *

* * * *
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 0; i < 7; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < 4; j++) {
                if(i == 0 || i == 6) {
                    cout<<"* ";
                } else if(j == 0 || j == 3) {
                    cout<<"* ";
                } else {
                    cout<<"  ";
                }
            }
            cout<<"\n";
        } else {
            for(int j = 0; j < 4; j++) {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}