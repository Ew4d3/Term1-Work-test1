
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> x;
    double num;

    cout << "Input numbers (enter -1 to finish) ";

    while (cin >> num && num != -1)
    {
        x.push_back(num);
    }

    if (x.size()==0)
    {
        cout << "empty" << endl;
        return 0;
    }

    double largest = x[0];
    double smallest = x[0];


    for (int i = 1; i < x.size(); ++i)
    {
        if (x[i] > largest)
        {
            largest = x[i];
        }
        if (x[i] < smallest)
        {
            smallest = x[i];
        }
    }

    cout << "largest number: " << largest << endl;
    cout << "smallest number: " << smallest << endl;


    return 0;
}