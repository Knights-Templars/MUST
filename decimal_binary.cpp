#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    int i;
    int terms[32];
    int number = atof(argv[1]);
    for (i=0; i < 32; i++)
    {
        terms[i] = 0;
    }
    for (i=0; i < 32; i++)
    {
        terms[i] = number%2;
        number /= 2;
    }
    cout << "Number of bytes = " << sizeof(number) << endl;
    for (i=0; i < 32; i++)
    {
        // The printout should be reversed.
        cout << terms[i] << " ";
    }

    cout << endl;
    return 0;
}