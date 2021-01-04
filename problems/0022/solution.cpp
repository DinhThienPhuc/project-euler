#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int SUBTRACT_RANGE = 64;
    string line;
    string content;
    string word;
    string delimiter = "\",\"";
    set<string> arr;
    long result = 0;

    ifstream myfile("./problems/0022/first_names.txt");

    if (myfile.is_open() && getline(myfile, line))
    {
        content = line;
        myfile.close();
    }

    int contentLength = content.length();

    int i = 1;

    while (i < contentLength)
    {
        if (content[i] != '"')
        {
            word += content[i];
            i++;
        }
        else
        {
            arr.insert(word);
            word = "";
            i += 3;
        }
    }

    for (set<string>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        string w = *it;
        int wordSum = 0;
        for (int i = 0, len = w.length(); i < len; i++)
        {

            wordSum += ((int)w[i] - SUBTRACT_RANGE);
        }

        long order = distance(arr.begin(), it) + 1;

        result += (order * wordSum);
    }

    cout << "C++: " << result << "  - (solution)" << endl;

    return 0;
}
