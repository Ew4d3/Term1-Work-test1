#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <string>


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
    vector<string> wordarr;
    deque<string> wordarrRev;

    string longest = "";
    cout << "input words, -1 to finish \n";

    while (cin >> word) {
        if (word == "-1") {
            break;
        }

        wordarr.push_back(word);
        count++;

        if (word.length() > longest.length()) {
            longest = word;
        }
    }

     for (int i = wordarr.size() - 1; i >= 0; --i) {  //stores backwards+outputs
        wordarrRev.push_back(wordarr[i]);  //gets back elemetn in wordarr + puts in front of wordarRev
    }


        //for (int i = 0; i <= wordarr.length()-1; ++i)  //traverse arr adding each element to total
        //    wordarrRev.push_back(wordarr[i]);

            //cout << total; 


    cout << "number of words: " << count << "\n";
    cout << "longest word: " << longest << "\n";

    cout << "\n Words in reverse order:\n";
    for (int i = 0; i < wordarrRev.size(); ++i) {
        cout << wordarrRev[i] << " ";
    }

    cout << "\n Words in reverse order v2 :\n";

    for (int i = wordarr.size() - 1; i >= 0; --i) {  //traverses backwards + outpouts as goes along
        cout << wordarr[i] << " ";
    }

    cout << endl;

    return 0;
}