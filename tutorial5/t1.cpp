#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;

void delete_first_zero(list<double> &vs) {
	for (auto it = vs.begin(); it != vs.end(); ++it) {
		if (*it == 0.0) {
			vs.erase(it);
			return;
		}
	}
}

void remdups(list<string> &ws) {
	if (ws.empty()) {
		return;
	}

	auto current = ws.begin();
	auto next = current;
	++next;
	while (next != ws.end()) {
		if (*current == *next) {
			next = ws.erase(next);
		} else {
			current = next;
			++next;
		}
	}
}

int main() {
	map<string, size_t> occurrences;
	string word;

	while (cin >> word) {
		++occurrences[word];
	}

	for (const auto &entry : occurrences) {
		cout << entry.first << ' ' << string(entry.second, '*') << '\n';
	}
}
