#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    srand(time(nullptr));
    int n = 100;
    int secret = rand()%n + 1;
    cout << "Guess a number between 1 and " << n << ": "<<"\n";
    int guess;
    int guessnum;

    cin >> guess;

    while (guess < 1 || guess > n) { 
        cout << "outta range mf " <<"0 > n <" << n << ": "; 
        cin >> guess; 
        }

    if (guess>0 and n<guess){

        while (guess != secret) {
            cout << "Wrong! Guess again: ";
            if (guess>secret)
                cout<<"lower"<<endl;
            else if(guess<secret)
                cout<<"higher"<<endl;
        guessnum++;
        cin >> guess; }

  

    }


    cout << "Correct!\n";
    cout<<guessnum<<" guesses \n";
    main();
    return 0;
}