// Find the version of c++ language

// ( Note: This code is purly generated by chatgpt )
#include <iostream>
using namespace std;

int main()
{
    if (__cplusplus == 199711L)
    {
        cout << "C++98 or C++03" << endl;
    }
    else if (__cplusplus == 201103L)
    {
        cout << "C++11" << endl;
    }
    else if (__cplusplus == 201402L)
    {
        cout << "C++14" << endl;
    }
    else if (__cplusplus == 201703L)
    {
        cout << "C++17" << endl;
    }
    else if (__cplusplus >= 202002L)
    {
        cout << "C++20 or newer" << endl;
    }
    else
    {
        cout << "Pre-standard C++ or unknown version" << endl;
    }

    return 0;
}
