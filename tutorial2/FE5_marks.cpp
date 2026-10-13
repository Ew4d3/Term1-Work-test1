
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> marks;
    int mark;
    double sum = 0;

    cout << "Enter marks (-1 to finish): ";

    while (cin >> mark && mark != -1)
    {
        marks.push_back(mark);
        sum += mark;
    }

    if (marks.size() > 0)
    {
        sort(marks.begin(), marks.end());

        cout << "Number of students: "
             << marks.size() << '\n';

        cout << "Lowest: "
             << marks.front() << '\n';

        cout << "Highest: "
             << marks.back() << '\n';

        cout << "Average: "
             << sum / marks.size() << '\n';
    }
    else
    {
        cout << "No marks entered." << '\n';
    }

    return 0;
}