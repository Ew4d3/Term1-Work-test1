#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

double average(const vector<double>& values) {
	double sum = 0;
	for (double value : values) {
		sum += value;
	}
	return sum / values.size();
}

double median(vector<double> values) {
	sort(values.begin(), values.end());
	size_t middle = values.size() / 2;
	if (values.size() % 2 == 1) {
		return values[middle];
	}
	return (values[middle - 1] + values[middle]) / 2;
}

int main() {
	vector<string> words;
	vector<vector<double>> numbers;

	string word;
	while (cin >> word && word != "-1") {
		double value;
		if (!(cin >> value) || value == -1) {
			break;
		}

		size_t index = 0;
		while (index < words.size() && words[index] != word) {
			++index;
		}
		if (index == words.size()) {
			words.push_back(word);
			numbers.emplace_back();
		}
		numbers[index].push_back(value);
	}

	for (size_t i = 0; i < words.size(); ++i) {
		cout << words[i] << ": average = " << average(numbers[i])
			 << ", median = " << median(numbers[i]) << '\n';
	}

	return 0;
}
