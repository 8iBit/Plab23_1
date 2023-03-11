#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
    float sum=0;
    double a = argc-1;
    if(argc == 1) cout << "Please input numbers to find average.";
    else 
    {
        for(int i=0;i<argc-1;i++)
        {
            sum += atof(argv[i+1]);
        }
        cout << "---------------------------------\n";
        cout << "Average of " << a << " numbers = " << sum/a << "\n";
        cout << "---------------------------------\n";
    }
}
