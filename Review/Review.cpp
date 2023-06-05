// Review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    /*
    int a = 10;
    int b = 10;
    double c = 3;
    double d = 5;
    double e = a + b;
    double f = c * d;
    double g = e / f;

    double aa = 10;
    double bb = 5;
    double cc = (aa + 10) / (3 * bb);
    cout << cc;

    int TotalSales = 95000;
    const double StateTax = .04;
    const double CountyTax = .02;
    double TotalStateTax = TotalSales * StateTax;
    double TotalCountyTax = TotalSales * CountyTax;
    double TotalTax = TotalStateTax + TotalCountyTax;
    double Profit = TotalSales - TotalTax;

    cout << "2% County Tax: " << TotalCountyTax << endl
         << "4% State Tax: " << TotalStateTax << endl
         << "Total Tax: " << TotalTax << endl
         << "Total Sales: " << TotalSales << endl
         << "Profit: " << Profit;
    */

    /*
    const double value1 = 32;
    const double value2 = .5556;

    cout << "Please put your Fahrenheit and we will automatically convert it to Celcius: ";
    double Fah;
    cin >> Fah;
    double Celcius = (Fah - value1) * value2;
    cout << Celcius;
    */
    /*
    srand(time(nullptr));
    short maxValue{ 6 };
    short minValue{ 1 };
    short number = rand() % (maxValue - minValue + 1) + minValue;
    cout << number;
    */
    /*
    int xyz = 110;
    int* pXYZ = &xyz;
    int y = *pXYZ;
    int* pabc = &*pXYZ;
    int* finalabc = &*pabc;
    cout << *finalabc + 15;
    */
    string pinpw = "Helloworld";
    string pin{};
    int choice{};
    int i{};
    int tries = 3;

    cout << "Hello welcome to Online Banking Application. How can I help you today? " << endl << endl <<
            "Press 1 for Withdrawal." << endl <<
            "Press 2 for Checking Balance." << endl <<
            "Press 3 for Exit" << endl << endl <<
            "Enter: ";
    cin >> choice;
    
    if (choice == 1) {
        system("cls");
        do {
            i++;
            cout << tries - i << " more reserved tries before closing app." << endl << endl;
            cout << "Enter your PIN number: ";
            cin >> pin;
            system("cls");
            if (pin != pinpw) {
                cout << "You've entered incorrect PIN number!" << endl <<
                        "Press enter to continue.";
                        cin.get();
                        if (cin.get() == '\n') {
                            system("cls");
                        }
                        //"You have " << tries - i << " choices left to make!" << endl << endl;
            }
            else if (pin == pinpw) {
                cout << "Congrats!";
            }
        } while (pin != pinpw and i < 3);
    }
    else if (choice == 2) {
        system("cls");
        do {
            i++;
            cout << tries - i << " more reserved tries before closing app." << endl << endl;
            cout << "Enter your PIN number: " << endl << endl;
            cin >> pin;
            system("cls");
            if (pin != pinpw) {
                cout << "You've entered incorrect PIN number!" << endl <<
                    "Press enter to continue.";
                cin.get();
                if (cin.get() == '\n') {
                    system("cls");
                }
                //"You have " << tries - i << " choices left to make!" << endl << endl;
            }
            else if (pin == pinpw) {
                cout << "Congrats!";
            }
        } while (pin != pinpw and i < 3);
    }
    else if (choice >= 4) {
        cout << "Your input didn't match the choices! Try again!" << endl << endl << endl;
        return main();
    }
    else if (choice == 3){
        cout << "Thank you for using our App!";
        return 0;
    }
    else {
        cout << "Your input is an error!";
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
