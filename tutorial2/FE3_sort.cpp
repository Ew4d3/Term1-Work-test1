
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> x;
    double num;
    double temp;

    cout << "input numbers (enter -1 to finish): ";

    while (cin >> num && num != -1)
    {
        x.push_back(num);
    }

    if (x.empty())
    {
        cout << "empty" << endl;
        return 0;
    }

    for (int i = 0; i < x.size() - 1; ++i)
    {
        for (int j = 0; j < x.size() - 1 - i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j + 1];
                x[j + 1] = x[j];
                x[j] = temp;
            }
        }
    }
    

    cout << "sorted ";
    for (int i = 0; i < x.size(); ++i)
    {
        cout << x[i] << " ";
    }

    cout << endl;

    return 0;
}