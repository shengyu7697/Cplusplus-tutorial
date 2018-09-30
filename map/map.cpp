#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // declare container and iterator
    map<int, string> mapStudent;
    map<int, string>::iterator iter;
    map<int, string>::reverse_iterator iter_r;

    // insert element
    mapStudent.insert(pair<int, string>(000, "Jack"));

    mapStudent[123] = "Tom";
    mapStudent[456] = "Bob";

    // traversal
    for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
        cout << iter->first << " " << iter->second << endl;
    for (iter_r = mapStudent.rbegin(); iter_r != mapStudent.rend(); iter_r++)
        cout << iter_r->first << " " << iter_r->second << endl;

    // find and erase the element
    iter = mapStudent.find(123);
    mapStudent.erase(iter);

    iter = mapStudent.find(123);

    if (iter != mapStudent.end())
       cout << "Found, value is " << iter->second << endl;
    else
       cout << "Not Find" << endl;

    return 0;
}