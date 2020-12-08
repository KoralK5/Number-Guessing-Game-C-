#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 

	using namespace std;
	int num;    //variable to hold randomly generated number
	int guess;  //variable to hold user inputs
	int a;
	string ans; //variable to hold user input for y/n
	int numcorguess;

	int numberGenerator()
	{
    	srand((unsigned)time(0));
		int com = (rand()%100+1);
		return com;
	}
  
	int main()
	{
	    cout << "Welcome to the Number Guessing Game!" << endl;
    	ans = "y";

	    while(ans == "y")
		{
			num = numberGenerator();
			cout << "\nI have generated a random number between 1 and 100." << endl;

			for(int a = 1; a <= 7; a = a + 1)
			{
				cout << "\nPlease guess what the number is. " << endl;
				cin >> guess;

				if(guess >= 0 && guess <=100 && guess > num)
			  	{
					cout << "Your guess is too high!" << endl;
				}

				if(guess >= 0 && guess <=100 && guess < num)
			  	{
					cout << "Your guess is too low! " << endl;
				}

				if(guess >= 0 && guess <=100 && guess == num)
			  	{
					cout << "You've guessed the correct number!" << endl;
					numcorguess = numcorguess + 1;
					break;
				}
				cout << "\nYou have " << 7 - a << " guesses left" << endl;

				if(a == 7)
			  	{
	    			cout << "You have ran out of guesses!" << endl;
					break;
				}
			}

			cout << "Play again? (y/n)" << endl;
	 		cin >> ans;
			if(ans == "n")
			{
    			cout << "You managed to guess a total of " << numcorguess << " numbers correctly!" << endl;
    			cout << "Thank you for playing!" << endl;
				break;
      		}
      		else if(ans == "y")
			{
      		}
      		else
			{
    			cout << "Please enter y/n" << endl;
      		}
		}
		int stop;
		cin >> stop;
   }
