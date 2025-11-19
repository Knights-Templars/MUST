#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char* argv[])
{
    double r, s;            // declare variables
    r = atof(argv[1]);      // convert text to argv[1] to double
    s = sin(r);
    cout << "A computational physicist writing c++ code after a long time - sin(" << r << ") =" << s << endl;
    return 0;
}
