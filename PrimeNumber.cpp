#include <iostream>
using namespace std;
int main() 
{
    //Interface
    int choice;
    cout << "Enter 1 to find prime numbers in a given range or 2 to check if a  number is prime number: ";
    cin >> choice;
    //Range Check
    if (choice == 1)
    {
        int start, end;
        cout << "Enter the start of the range: ";
        cin >> start;
        cout << "Enter the end of the range: ";
        cin >> end;
        cout << "Prime numbers in the given range are: ";
        for (int num = start; num <= end; num++) 
        {
            bool prime = true;
            if (num <= 1) 
            {
                prime = false;
            }
            else
            {
                for (int num2 = 2; num2 * num2 <= num; num2++)
                {
                    if (num % num2 == 0) 
                    {
                        prime = false;
                        break;
                    }
                }
            }
            if (prime) 
            {
                cout << num << " ";
            }
        }
        cout << endl;
    }
    //Number Check
    else if (choice == 2) 
    {
        int num;
        cout << "Enter the number to check: ";
        cin >> num;
        bool prime = true;
        if (num <= 1) 
        {
            prime = false;
        }
        else 
        {
            for (int num = 2; num * num <= num; num++)
            {
                if (num % num == 0) {
                    prime = false;
                    break;
                }
            }
        }

        if (prime) 
        {
            cout << num << " is a prime number." << endl;
        }
        else
        {
            cout << num << " is not a prime number." << endl;
        }
    }
    else 
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}