//TODO:
//FIXME:


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> lines;
    string line;

    while (getline(cin, line)) //input
    {
        if (line == "-1") //exit
        {
            break;
        }

        lines.push_back(line);  //add to arr
    }

    for (int i = 0; i < lines.size(); i++) //traverse arr
    {
        cout << i + 1 << ": " << lines[i] << endl;  //output each line w num
    }

    return 0;
}