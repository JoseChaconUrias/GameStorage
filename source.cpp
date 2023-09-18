#include <iostream>
#include "Header.h"
#include <string>

void userOptions()
{
	cout << "Please choose an option:\n";
	cout << "1. Add a game to the collection\n";
	cout << "2. Display all games in the collection\n";
	cout << "3. Search for a game\n";
	cout << "4. Sort the collection\n";
	cout << "5. Exit\n";
	cout << '\n' << "Enter your choice: ";
}
void addGame(VideoGame games[], int& array_size)
{
	if (array_size < 50)
	{
		VideoGame game;

		cout << "Enter the game title: ";
		cin.ignore();
		getline(cin, game.title);

		cout << "Enter the genre: ";
		getline(cin, game.genre);

		cout << "Enter the platform: ";
		getline(cin, game.platform);

		cout << "Enter the release year: ";
		cin >> game.year;

		cout << "Enter the developer name: ";
		cin.ignore();
		getline(cin, game.developer.name);

		cout << "Enter the developer country: ";
		getline(cin, game.developer.country);

		game.id = array_size + 1;
		games[array_size] = game;
		array_size++;


		cout << '\n' << "Game added successfully! Game ID: " << game.id << '\n';

	}
	else
	{
		cout << "Sorry you have reached the max storage limit!\n";
	}

}

void displayGames(VideoGame games[], int array_size)
{

	cout << "Displaying games: \n" << '\n';

	for (int i = 0; i < array_size; i++)
	{


		int num_list = i + 1;
		cout << num_list << "." << '\n';
		cout << "Game ID: " << games[i].id << '\n';
		cout << "Title: " << games[i].title << '\n';
		cout << "Genre: " << games[i].genre << '\n';
		cout << "Platform: " << games[i].platform << '\n';
		cout << "Release Year: " << games[i].year << '\n';
		cout << "Developer: " << games[i].developer.name << " (" << games[i].developer.country << ")" << '\n';
		cout << '\n';
	}

}

void searchGames(VideoGame games[], int array_size)
{
	int user_option{};
	int get_user_gameID = 0;
	string get_user_title;
	string get_user_genre;
	string get_user_platform;
	string get_user_year;
	string get_user_developer;

	cin >> user_option;
	cout << '\n';

	if (user_option == 1)
	{
		cout << "Enter game ID: ";
		cin >> get_user_gameID;
		cout << "Searching for games with similar ID...\n" << '\n';
	}
	else if (user_option == 2)
	{
		cout << "Enter game title: ";
		cin.ignore();
		getline(cin, get_user_title);
	}
	else if (user_option == 3)
	{
		cout << "Enter game genre: ";
		cin.ignore();
		getline(cin, get_user_genre);
	}
	else if (user_option == 4)
	{
		cout << "Enter game platform: ";
		cin.ignore();
		getline(cin, get_user_platform);
	}
	else if (user_option == 5)
	{
		cout << "Enter game year: ";
		cin.ignore();
		getline(cin, get_user_year);
	}
	else if (user_option == 6)
	{
		cout << "Enter game developer: ";
		cin.ignore();
		getline(cin, get_user_developer);
	}

	for (int i = 0; i < array_size; i++)
	{
		// checks which array index matches the given string
		// () start of conditions
		if (games[i].id == get_user_gameID || games[i].title == get_user_title || games[i].genre == get_user_genre || \
			games[i].platform == get_user_platform || games[i].year == get_user_year ||\
			games[i].developer.name == get_user_developer)		// () end of conditions
		{
			cout << "Found a game!:\n";
			cout << "Game ID: " << games[i].id << '\n';
			cout << "Title: " << games[i].title << '\n';
			cout << "Genre: " << games[i].genre << '\n';
			cout << "Platform: " << games[i].platform << '\n';
			cout << "Release Year: " << games[i].year << '\n';
			cout << "Developer: " << games[i].developer.name << " (" << games[i].developer.country << ")" << '\n';
			cout << '\n';
		}
	}
}


void sortGames(VideoGame games[], int array_size)
{
	int user_option{};

	cin >> user_option;

	if (user_option == 1)
	{
		for (int i = 0; i < array_size - 1; i++)
		{
			for (int j = 0; j < array_size - i - 1; j++)
			{
				if (games[j].id > games[j + 1].id)
				{
					VideoGame temp = games[j];
					games[j] = games[j + 1];
					games[j + 1] = temp;
				}
			}
		}
	}
	else if (user_option == 2)
	{
		for (int i = 0; i < array_size - 1; i++)
		{
			for (int j = 0; j < array_size - i - 1; j++)
			{
				if (games[j].title > games[j + 1].title)
				{
					VideoGame temp = games[j];
					games[j] = games[j + 1];
					games[j + 1] = temp;
				}
			}
		}
	}
}
