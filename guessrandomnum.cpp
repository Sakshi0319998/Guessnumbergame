#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber;
    int guess  = 0;
    int chances = 0;
    srand((unsigned int) time(NULL));
    int number = (rand() % 100)+1;
    cout << "Welcome to the guess random number game"<<endl;

    do
    {
        cout << "Enter your guess number between 1 and 100: ";
        cin >> guess;
        chances++;
        
        if (guess > randomNumber) 
         {
            cout << "The guess higher number!"<< endl;
        } 
        else if(guess < randomNumber)
         {
        cout  << "The guess lower Number!"<< endl;
        }
        else
        {
            cout << "you got the right number" <<guess<<"in"<<chances<<"tries!";
        }
     }
      
     while (guess != randomNumber);
    
    return 0;
    
}