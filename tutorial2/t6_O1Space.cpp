#include <iostream>
using namespace std;  //O(n) because only look at each num once. 

int main() {
    cout << "Please enter a series of numbers (-1 to finish)\n";

    double x;
    double total = 0;
    double smallest;
    double largest;
    int count = 0;

    cin >> x;

    while (x != -1) {

        total += x;  //doesnt store in arr, just adds inp to toal, therefore O(1) space
        count++;  //increment count to get avg later

        //first number
        if (count == 1) {
            smallest = x;
            largest = x;
        }
        else {
            if (x < smallest) {
                smallest = x;
            }

            if (x > largest) {
                largest = x;
            }
        }

        cin >> x;
    }

    cout << count << " numbers\n";

    if (count > 0) {

        double average = total / count;

        cout << "total = " << total << '\n';
        cout << "average = " << average << '\n';

        if (count > 2) {
            double score_total = total - smallest - largest;
            double score_average = score_total / (count - 2);

            cout << "score average = " << score_average << '\n';
        }
    }

    return 0;
}