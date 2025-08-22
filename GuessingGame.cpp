#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
 play_more:
 int guess_number, secret_number;
 int number_of_attempts = 0;
 char response;
 srand (time(0));                         // Seed the random number generator with the current time
 secret_number = rand() % 151 - 100;     // Generate a random secret number between -100 and 50
 do           // Loop until the user guesses the secret number
   {
    cout<<endl;
    cout<<"\n\t\t\tEnter the Number to Guess: ";
    cin>>guess_number;
    number_of_attempts++;
    if (guess_number > secret_number)
       {
        cout<<"\t\t\tGuess Number is too high.\n\t\t\tTry Again!!!";
       }
    else if (guess_number < secret_number)
        {
         cout << "\t\t\tGuess Number is too low.\n\t\t\tTry Again!!!";
        }
    else if (guess_number == secret_number)
        {
         cout<<"\t\t\tCongratulations!! You guess the number correctly!!!\n";
         cout<<"\t\t\tTotal Attempts = "<<number_of_attempts;          
         break;               // exit the loop when the number is guessed correctly
        }
    }
    while (true);
    cout<<"\n\t\t\tWant to Play More: Yes or No\t";
    cin>>response;
    if (response == 'N' || response == 'n')
       {
        cout<<endl;
        return 0;
       }
    else if (response == 'Y' || response == 'y')
            {
             goto play_more;
            }
}             