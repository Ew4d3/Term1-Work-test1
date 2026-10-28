#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;
    cout << "You entered: " << number << endl;

    return 0;
}


/*
 
1. Modify the average function from last week to use iterators instead of indices, and then adapt
it to lists. Do this both as an iterator loop and as a ranged forloop.

2. Write a function
void scale(double s, list<double> &vs)
that modifies vs, multiplying each element by s. Again, do this both as an iterator l



// &is a reference, so the function can modify the original lisst
// 

*/
