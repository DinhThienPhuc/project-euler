#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream names;
    string line;
    string content;
    string word;
    string delimiter = "\",\"";
    vector<string> arr;

    names.open("./problems/0022/first_names.txt");

    if (names.is_open())
    {
        while (getline(names, line))
        {
            content += line;
        }
        names.close();
    }

    // for (int i = 0, len = content.length(); i < len; i++)
    // {
    //     string character = content[i];

    //     if (character == "\"" || character == ",")
    //     {
    //         arr.push_back(word);
    //         word = "";
    //     }
    //     else
    //     {
    //         word = word + character;
    //     }
    // }

    // for (vector<string>::iterator it = arr.begin(); it != arr.end(); ++it)
    // {
    //     cout << 'meo: ' << *it << endl;
    // }

    // cout << "C++: "
    //      << ""
    //      << "  - (solution)" << endl;

    return 0;
}
