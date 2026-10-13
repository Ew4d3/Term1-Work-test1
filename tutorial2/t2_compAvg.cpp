#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
cout << "Please enter a series of numbers ( -1 to finish )\n";
// read numbers from the standard input
// and store them in a vector

    vector<double> v;
    double x;
    double total = 0 ;
    double score_total=0;
    int count=0 ;
    cin >> x;
    while (x != -1) {
        //total=total+x;
        //count++;
        v.push_back(x);
        cin >> x;  //gte next number
    }

    // Compute and output results
    auto n = v.size();
    cout << n << " numbers\n";
    if (n > 0) {
        // Sort the whole vector
        sort(v.begin(), v.end());

        for (int i = 0; i <= n-1; ++i)  //traverse arr adding each element to total
            total+=v[i];
            //cout << total;

        for (int i = 1; i <= n-2; ++i)  //score traverse
            score_total+=v[i];
            cout << score_total <<"\n";


        // Find the median
        auto middle = n / 2;
        double median;
        double average;
        double score_average;
        

        if (n % 2 == 1) { // size is odd
            median = v[middle];
        } else { // size is even
            median = (v[middle - 1] + v[middle]) / 2;
        }

        //outptus
        cout << "median = " << median << '\n';
        cout<< "total= "<<  total<<"\n";
        average=total/v.size();
        score_average=score_total/(v.size()-2);
        cout << "average = " << average << '\n';
        cout << "score average = " << score_average << '\n';

    }

    return 0;


}
