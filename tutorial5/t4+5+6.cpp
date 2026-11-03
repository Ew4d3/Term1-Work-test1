#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;

void delete_first_zero(list<double> &vs)
{
	for (auto it = vs.begin(); it != vs.end(); ++it) {
		if (*it == 0.0) {
			vs.erase(it);
			return;
		}
	}
}

void remdups(list<string> &ws)
{
	for (auto it = ws.begin(); it != ws.end();) {
		auto next = it;
		++next;
		if (next != ws.end() && *it == *next)
			ws.erase(next);
		else
			++it;
	}
}

int main()
{
	list<double> numbers;
	double value;

	cout << "Enter numbers (-1 to finish):\n";
	while (cin >> value && value != -1.0)
		numbers.push_back(value);

	map<double, size_t> counts;
	for (double number : numbers)
		++counts[number];

	cout << "Histogram:\n";
	for (const auto &entry : counts) {
		cout << entry.first << " ";
		for (size_t i = 0; i < entry.second; ++i)
			cout << '*';
		cout << '\n';
	}

	return 0;
}
