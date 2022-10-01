/* This program prints a months calendar
** The program receives the number of days in the month and the first day of the week in the month as input */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // declare variables
    unsigned int numDays;
    unsigned int firstDay;
    unsigned int col = 1;

    cout << "Enter the number of days in the month:"<< endl;
    cin >> numDays;

    cout << "Enter the number (0-6) representing the first day of the month. 0 for Sunday, 6 for Saturday:" << endl;
    cin >> firstDay;

    cout << "Sun   Mon   Tue   Wed   Thu   Fri   Sat" << endl;
    cout << "---------------------------------------" << endl;

    for (int i = 1; i < firstDay; i++) {
        cout << "      ";
        col++;
    }

    for (int i = 1; i <= numDays; i++) {
        if (col > 7) {
            cout << endl;
            col = 1;
        }
        col++;
        cout << setw(3) << i << "   ";
    }
}