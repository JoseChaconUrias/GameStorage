#include <iostream>
#include "header.h"
#include <string>

using namespace std;

int main()
{
	VideoGame userGame[50]; // max game size is 50

	// variable declarations
	string get_user_option{};
	int array_size = 0;

	// greetings
	cout << "Welcome to Mr. Whiskers' VideoGame Collection Management System!\n" << '\n';

	do
	{
		userOptions();
		cin >> get_user_option;
		cout << '\n';

		if (get_user_option == "1")
		{
			addGame(userGame, array_size);
		}
		else if (get_user_option == "2")
		{
			if (array_size == 0) // checks if user has any games
			{
				cout << "You ain't got no games brokie...\n";
			}
			else
			{
				displayGames(userGame, array_size);
			}
		}
		else if (get_user_option == "3")
		{
			cout << "Search by:\n";
			cout << "1. Game ID\n";
			cout << "2. Game Title\n";
			cout << "3. Genre\n";
			cout << "4. Platform\n";
			cout << "5. Release year\n";
			cout << "6. Developer Name\n";
			cout << "Please select an option: ";

			searchGames(userGame, array_size);
		}
		else if (get_user_option == "4")
		{
			cout << "Sort by:\n";
			cout << "1. Game ID\n";
			cout << "2. Title\n";

			sortGames(userGame, array_size);
		}
		else if (get_user_option == "5")
		{
			cout << "Alright Alright Alright\n";
		}
		else
			cout << "Try again Einstein\n";

	} while (get_user_option != "5" );

	return 0;
}
