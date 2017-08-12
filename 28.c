#include <iostream>
#include <limits>


using namespace std;

int main()
{
double arg;
char a;

while (a!= 'q' && a != 'Q')
{
    cout << "Please enter a number x (q = program quit) : " << endl;
    cin >> arg;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}


return 0;
}
