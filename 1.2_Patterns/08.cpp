/*
* * * * * * * * *
  * * * * * * *
    * * * * * 
      * * * 
        *
*/

#include<iostream>
using namespace std;

int main() {
    int rows = 5;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < i; j++) {
            cout<<"  ";
        }
        cout<<"* ";
        for(int j = rows-1; j > i; j--) {
            cout<<"* * ";
        }
        cout<<"\n";
    }
    return 0;
}