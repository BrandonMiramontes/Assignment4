#include <iostream>
#include <string>

using namespace std;

string stringProcess(string orig_str)
{
    string result_str;

    //input original string
    cout << orig_str.length() << endl;

    //subtrings
    string substring1 = orig_str.substr(0,2);
    string substring2 = orig_str.substr(2,4);
    
    result_str = substring1 + "+" + substring2;
   
    return result_str;
}

int main()
{
    string orig_str;
    string result_str;

    cout << "Please input a string" << endl;
    cin >> orig_str;

    result_str = stringProcess(orig_str);

    cout << "The processed result is " << result_str << endl;

    return 1;
}
