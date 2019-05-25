#include <iostream>
using namespace std;

const char province = 'D';
const int week = 7;

int main()
{
    int temperature[province][week];

    cout << "Enter all temperature for a week of Province A, Province B and then Province C. \n\n";
    
    for (char i = 'A'; i < province; ++i)
    {
        for(int j = 0; j < week; ++j)
        {
            cout << "Province " << i  << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    
    for (char i = 'A'; i < province; ++i)
    {
        for(int j = 0; j < week; ++j)
        {
            cout << "Province " << i  << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

    return 0;
}
