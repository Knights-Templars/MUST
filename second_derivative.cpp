#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iomanip>

std::ofstream ofile;

using namespace std;

int main(int argc, char* argv[])
{
    // This will write to a user provided output filename
    char *outputfilename;
    outputfilename = argv[1];

    // number of mesh points
    int i = atoi(argv[2]);
    // value at which derivtive is calculated
    double x = atof(argv[3]);
    // size of the step size
    double h = 1.0 / (i);
    double derivative = (exp(x-h) + exp(x+h) - 2*exp(x)) / (h * h);
    double relative_error = log10(fabs(derivative - exp(x))/exp(x));

    
    ofile.open(outputfilename);
    ofile << setw(15) << setprecision(8) << "Derivative=" << derivative << " and relative error=" << relative_error <<endl;
    ofile.close();

    return 0;
}