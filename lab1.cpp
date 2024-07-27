#include <iostream>
#include<string>

using namespace std;
void printmenu()
{
    cout << "-- -- -- -- --Calculator Menu-- -- -- --" << endl;
    cout << "1. Add " << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Get Remainder" << endl;
    cout << "6. Exit" << endl;

}
void performOperation(int choice, int a, int b)
{
    if (choice >= 1 && choice <= 5) {
        cout << "Enter the first number : ";
        cin >> a;
        cout << "Enter the second number : ";
        cin >> b;
        if (choice == 1)
        {
            cout << a << " + " << b << " = " << a + b << endl;

        }
        else if (choice == 2)
        {
            cout << a << " - " << b << " = " << a - b << endl;

        }
        else if (choice == 3)
        {
            cout << a << " * " << b << " = " << a * b << endl;

        }
        else if (choice == 4)
        {
            if (b == 0)
            {
                do{
                    cout << "Can not divide by zero. Please enter a non-zero second number" << endl;
                cout << "Enter the second number : ";
                cin>>b;
                }while(b==0);
                cout << a << " / " << b << " = " << (float)(a / b) << endl;
            }
            else
            {
                cout << a << " / " << b << " = " << (float)(a / b) << endl;
            }
        }

        else if (choice == 5)
        {
            if (b == 0)
            {
                do{
                    cout << "Can not divide by zero. Please enter a non-zero second number" << endl;
                cout << "Enter the second number : ";
                cin>>b;
                }while(b==0);
                cin >> b;
                cout << a << " mod " << b << " = " << a % b << endl;
            }
            else
            {
                cout << a << " mod " << b << " = " << a % b << endl;
            }

        }
    }
        else
            cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
}
int main()
{
    int num1 = 0, num2 = 0;
    int choice=0;
    do
    {
        printmenu();
        cout << "Enter your choice(1-6) : ";
        cin >> choice;
        if (choice == 6)
        {
            cout << "Exiting the program. Good bye!";
        }
        else
            performOperation(choice, num1, num2);
    } while (choice != 6);
    return 0;
}