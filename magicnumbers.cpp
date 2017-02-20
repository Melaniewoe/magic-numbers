// Melanie Woe

#include <iostream>
using namespace std;

int reverse( int number, int reverse_so_far = 0 )
{
    if( number < 0 ) return -reverse( -number ) ;
    
    if( number < 10 ) return reverse_so_far*10 + number ;
    
    return reverse( number/10, reverse_so_far*10 + number%10 ) ;
}

int main()
{
    string name, Class;
    cout << "Please enter your name" << endl;
    cin >> name;
    
    cout << "What class are you using this program for?" << endl;
    cin >> Class;
    
    cout << name << ", Welcome to you Magic Number program. I hope it helps you with your " << Class << " class." << endl << endl;
    
    char choice;
    
    
    while (choice != 'C' && choice != 'c')
    {
        cout << "Please choose an option below:" << endl;
        cout << "a: Display an example" << endl;
        cout << "b: Try it out yourself!" << endl;
        cout << "c: Exit" << endl << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        
        
        if (choice == 'a' || choice == 'A')
        {
            cout << "Here is the example:" << endl;
            cout << "1. Your program will take the integer input from the user: (e.g. 901) " << endl;
            cout << "2. Reverse the input (e.g. 109)" << endl;
            cout << "3. Substract the reversal from the original number (e.g. 901-109 = 792)" << endl;
            cout << "4. Finally, reverse the resulting number (e.g. 297)" << endl;
            cout << "5. Add it to its unreserved form (e.g. 297 + 792)" << endl;
            cout << "6. The program will output the final result (=1089)" << endl << endl;
        }
        else if (choice == 'b' || choice == 'B')
        {
            
            
            
            // take the integer input from the user
            cout << "number? " << endl;
            int number;
            cin >> number ;
            
            // Reverse the input
            const int reverse_number = reverse(number);
            cout << "reverse_number: " << reverse_number << endl;
            
            // Substract the reversal from the original number
            const int difference = number - reverse_number;
            
            cout << "difference: " << difference << endl ;
            
            // Finally, reverse the resulting number
            
            const int reverse_difference = reverse(difference);
            cout << "reverse_difference: " << reverse_difference << endl ;
            
            // Add it to its unreversed form
            const int result = difference + reverse_difference ;
            
            // The program will output the final result
            cout << "result: " << result << endl << endl;
        }
        else if (choice != 'C' && choice != 'c')
        {
            cout << "Please enter a valid menu choice: " << endl;
            cin >> choice;
        }
        
    }
    return 0;
}
