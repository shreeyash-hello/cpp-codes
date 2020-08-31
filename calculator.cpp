#include <iostream>
using namespace std;
int main()
{
    char o, ch;
    float num1, num2;
    do
    {
        cout << "Enter operator either + or - or * or /: ";
        cin >> o;
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
        switch (o)
        {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            cout << "Error! operator is not correct";
            break;
        }
        cout << "\n\n do you want to Continue? (y or n)";
        cin >> ch;
    } while (ch != 'n' && ch != 'N');
    return 0;
}
