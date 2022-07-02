#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) {
    vector<int> answers;
    int type = 0;
    int data = 0;
    /* Query Types:
        1    -Push the element x into the stack.
        2    -Delete the element present at the top of the stack.
        3    -Print the maximum element in the stack.
     */

    //Parse string into query type and payload.
    for (int i = 0; i < operations.size(); i++) {
        vector<string> tempString;
        tempString.push_back(operations[i]);
        string tempType = tempString[0];
        string tempData = "";
        int j = 2;
        while (!tempString.empty()) {
            tempData += tempString[j];
            j++;
        }
    }


    //Build switch to handle queries

    //Push Case

    //Pop Case

    //Print Case

    return answers;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}
