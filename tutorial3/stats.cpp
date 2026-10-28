
#include "stats.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

// The median of the values in a vector
// Requires: v.size() > 0
double median(vector<double> v) {//copy of v is made to sort it without modifying the original vector
    const auto n = v.size();

    if (n == 0)
        throw domain_error("median of an empty vector");

    sort(v.begin(), v.end());

    const auto middle = n / 2;

    if (n % 2 == 1)
        return v[middle];
    else
        return (v[middle - 1] + v[middle]) / 2.0;
}

// The average of the values in a vector
// Requires: v.size() > 0
double average(const vector<double>& v) { // use a reference to avoid copying the vector
    const auto n = v.size();

    if (n == 0)
        throw domain_error("average of an empty vector");

    double sum = 0;

    for (double value : v)
        sum += value;

    return sum / n;
}

// Average score excluding the first and last values
double score(const vector<double> v) { //marked as const indicates v doesnt chnage, even though being passes as reference
    if (v.size() < 3)
        throw domain_error("score requires at least three values");

    double score_total = 0;

    for (size_t i = 1; i < v.size() - 1; ++i)
        score_total += v[i];

    return score_total / (v.size() - 2);
}

// Maximum value in a vector
double max(const vector<double> v) {
    if (v.empty())
        throw domain_error("max of an empty vector");

    double largest = v[0];

    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] > largest)
            largest = v[i];
    }

    return largest;
}

// Minimum value in a vector
double min(const vector<double> v) {
    if (v.empty())
        throw domain_error("min of an empty vector");

    double smallest = v[0];

    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] < smallest)
            smallest = v[i];
    }

    return smallest;
}



void write_vector(ostream &out, const vector<double> &v) {
const auto n = v.size();
        cout << "vector:";
using vec_size = vector<double>::size_type;
for (vec_size i = 0; i < n; ++i)
    cout << ' ' << v[i];
cout<< '\n';

}

