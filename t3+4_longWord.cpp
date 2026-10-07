#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*int main() {
    string words;
    cout << "input words\n";
    cin>>words; 
    cout<< words.length();
    }
*/



int main() {
    string word;
    int count = 0;
    string longest = "";
    cout << "input words, -1 to finish \n";

    while (cin >> word) {
        if (word == "-1") {
            break;
        }
        if (word.length()>longest.length()){
            longest=word;

        }
        count++;
    }

    cout<<"number of words" << count<< "\n";
    cout<<"longest word : "<< longest<<endl;

    return 0;
}