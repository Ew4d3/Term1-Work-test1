#include "stats.h"
#include <iostream>
#include <vector>

using namespace std;

/*

clang++ -std=c++17 main.cpp stats.cpp -o stats
./stats

*/

// read numbers from an input stream
// and return them in a vector

vector<double> read_vector(istream &in) {
    vector<double> v;
    double x;

    while (in >> x) {
        if (x == -1)
            break;
		
        v.push_back(x);
    }

    return v;
}

int main() {
	cout << "Please enter a series of numbers\n";
	


	// read numbers from the standard input
	// and store them in a vector
	const auto values = read_vector(cin);

	// compute and output results
	const auto n = values.size();
	cout << n << " numbers\n";
	if (n > 0) {
		cout << "average = " << average(values) << '\n';
		cout << "median = " << median(values) << '\n';
		cout << "score = " << score(values) << '\n';
		cout << "max = " << max(values) << '\n';
		cout << "min = " << min(values) << '\n';
		


	}
	return 0;
}





