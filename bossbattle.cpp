/*
Author: Arda
Company: PhysTech
Date: 10/1/20
*/
#include  <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    if(n <=3)
        cout << 1 << endl;
    else
        cout << n-2 << endl;

    return 0;
}