// KeyWords2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Jon Ullom
//31-0CT-18
//

# include "pch.h"
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <ctime>
# include <cctype>

using namespace std;

int main()
{
	//This variable stores the number of times a user can guess wrong before they lose//
	const int MAX_WRONG = 8;

	// Create a collection of 10 words you had wrote down manually//
	vector<string>words;
	words.push_back("INTEL");
	words.push_back("OPERATIVE");
	words.push_back("LOCATION");
	words.push_back("TARGET");
	words.push_back("ENEMY");
	words.push_back("MISSION");
	words.push_back("MONEY");
	words.push_back("RENDITION");
	words.push_back("COVER");
	words.push_back("BLACKSITE");

	//This is the randomizer that bases it randomization off the current time//
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	//This is the variable for the mystery word chosen from the list of possible words at random by the randomizer//
	const string THE_WORD = words[0];
	//This variable stores the number attempts the user has answered incorrectly//
	int wrong = 0;
	//This variable both gives the size of the word to the user and stores correctly guessed letters
	//in their place in the word//
	string soFar(THE_WORD.size(), '-');
	//This variable stores the letter used throughout the simulation//
	string used = "";
	// Hold the recruit's name in a var, and address them by it throughout the simulation.//
	string user;
	char again='y';

	// Display Title of program to user//
	cout << "Welcome to KeyWord2.\n";
	// Ask the recruit to login using thier name//
	cout << "\nPlease enter your name:\n";
	// Hold the recruit's name in a var, and address them by it throughout the simulation.//
	cin >> user;
	// Display an overview of what Keywords II is to the recruit//
	cout << "\n"<<user<< ", in the following simulations you will be given spaces denoting the size of a word.\n";
	cout << "You will enter a letter trying to guess the word. You will have 8 guesses to try and solve the blank word.\n";
	
	while(again=='y')
	{
	//this is the for loop to run three simulations for each time the user wants to play//
	 for (int sim = 1; sim < 4; sim++)
	 {
		//This variable stores the number of times a user can guess wrong before they lose//
		const int MAX_WRONG = 8;

		// Create a collection of 10 words you had wrote down manually//
		vector<string>words;
		words.push_back("INTEL");
		words.push_back("OPERATIVE");
		words.push_back("LOCATION");
		words.push_back("TARGET");
		words.push_back("ENEMY");
		words.push_back("MISSION");
		words.push_back("MONEY");
		words.push_back("RENDITION");
		words.push_back("COVER");
		words.push_back("BLACKSITE");

		//This is the randomizer that bases it randomization off the current time//
		srand(static_cast<unsigned int>(time(0)));
		random_shuffle(words.begin(), words.end());
		//This is the variable for the mystery word chosen from the list of possible words at random by the randomizer//
		const string THE_WORD = words[0];
		//This variable stores the number attempts the user has answered incorrectly//
		int wrong = 0;
		//This variable both gives the size of the word to the user and stores correctly guessed letters
		//in their place in the word//
		string soFar(THE_WORD.size(), '-');
		//This variable stores the letter used throughout the simulation//
		string used = "";
		// Hold the recruit's name in a var, and address them by it throughout the simulation.//
		string user;
		//This tells the user which of the three simulations per turn they are on.//
		cout << "\nYou are on simulation:" << sim << ".\n";
		// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word//
		while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
		{
			// Tell recruit how many incorrect guesses he or she has left//
			cout << "\n\n" << user << ", You have " << (MAX_WRONG - wrong);
			cout << " incorrect guesses left.\n";
			// Show recruit the letters he or she has guessed//
			cout << "\n" << user << ", You've used the following letters:\n" << used << endl;
			// Show player how much of the secret word he or she has guessed//
			cout << "\nSo far, the word is:\n" << soFar << endl;

			char guess;
			// Get recruit's guess//
			cout << "\n\nEnter your letter:";
			cin >> guess;
			//This changes the letter guessed from lower case to upper case//
			guess = toupper(guess);

			//While recruit has entered a letter that he or she has already guessed//
			while (used.find(guess) != string::npos)
			{
				cout << "\nYou've already guessed" << guess << endl;
				// Get recruit's next guess//
				cout << "Enter your letter:";
				cin >> guess;
				//This changes the letter guessed from lower case to upper case//
				guess = toupper(guess);
			}
			// Add the new guess to the group of used letters//
			used += guess;

			if (THE_WORD.find(guess) != string::npos)
			{
				// If the guess is in the secret word//
				cout << "That's Correct! " << guess << " is in the word.\n";
				for (int i = 0; i < THE_WORD.length(); ++i)
				{
					if (THE_WORD[i] == guess)
					{
						// Update the word guessed so far with the new letter//
						soFar[i] = guess;
					}
				}
			}

			else
			{
				// Tell the recruit the guess is incorrect//
				cout << "Sorry, " << guess << " isn't the word.\n";
				// Increment the number of incorrect guesses the recruit has made//
				++wrong;
			}
		}

		// If the recruit has made too many incorrect guesses//
		if (wrong == MAX_WRONG)
		{
			// Tell the recruit that he or she has failed the Keywords II course.//
			cout << "\nYou have failed your mission!";
		}

		else
		{
			// Congratulate the recruit on guessing the secret words//
			cout << "\nMission Accomplished!";
		}

		cout << "\nThe word was: " << THE_WORD << endl;
	 }
	 cout << "\nRun another 3 simulations?(y  or n)";
	 cin >> again;

	}
	cout << "Thank you for choosing KeyWord2 for your training needs.";
	system("pause");
	return 0;
}












 











// Ask the recruit if they would like to run the simulation again

// If the recruit wants to run the simulation again

//     Increment the number of simiulations ran counter

//     Move program execution back up to // Display the simulation # is staring to the recruit. 

// Otherwise 

//     Display End of Simulations to the recruit

//     Pause the Simulation with press any key to continue 


