#include<iostream>
using namespace std;

int main()
{
   int choice;
   long num1, num2, x;
   char cont;
do{

   cout << "\nMENU:"
           "\n\t1. Add"
           "\n\t2. Subtract"
           "\n\t3. Multiply"
           "\n\t4. Divide"
           "\n\t5. Modulus"
           "\n\nEnter your choice: ";
   cin >> choice;

   
   while(choice < 1 || choice > 5)
   {
      cout << "\nPlease choose the above mentioned option."
              "\nChoice: ";
      cin >> choice;
   }

   switch (choice)
   {
      //Addition
      case 1:
         cout << "Enter your two numbers: ";
         cin >> num1 >> num2;
         x = num1 + num2;
         cout << "Result: " << x;
         break;

      //Subtraction
      case 2:
         cout << "Enter your two numbers: \n";
         cin >> num1 >> num2;
         x = num1 - num2;
         cout << "Result: " << x;
         break;

      //Multiplication
      case 3:
         cout << "Enter your two numbers: \n";
         cin >> num1 >> num2;
         x = num1 * num2;
         cout << "Result: " << x;
         break;

      //Division
      case 4:
         cout << "Enter Dividend: ";
         cin >> num1;
         cout << "Enter Divisor: ";
         cin >> num2;

         
         while(num2 == 0)
         {
            cout << "\nDivisor cannot be zero."
                    "\nEnter divisor once again: ";
            cin >> num2;
         }
         x = num1 / num2;
         cout << "\nResult: " << x;
         break;

      //Modulus
      case 5:
         cout << "Enter your two numbers: \n";
         cin >> num1 >> num2;
         x = num1 % num2;
         cout << "Result: " << x;
         break;

      case 6:
         return 0;

      default: cout << "\nError";
   }
   	cout<<"\n\nContinue? ";
   	cin>>cont;
      }while (cont=='y' || cont=='Y');
}
