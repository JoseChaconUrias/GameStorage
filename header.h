#ifndef HEADER_H
#define HEADER_H

#include <string>
using namespace std;

struct Developer {
	string name;
	string country;
};

struct VideoGame {
	int id = 0;
	string title;
	string genre;
	string platform;
	string year;
	Developer developer;
};

// Desc: This function displays 5 options for the user
// Pre: None
// Post: 5 options for the user are displayed
void userOptions();

// Desc: This function adds a game to a array
// Pre: The array size must be less than 50
// Post: A new game is added to the collection with a unique ID
void addGame(VideoGame games[], int & array_size);

// Desc: This function displays the video games in the array
// Pre: array size must be less than 50
// Post: Each video game is displayed
void displayGames(VideoGame games[], int array_size);

// Desc: This function searches for a video game in the array
// Pre: array size must be less than 50
// Post: The game searched by the user is displayed
void searchGames(VideoGame games[], int array_size);

// Desc: This function sorts the video games either by
//		the unique ID or title
// Pre: the array size must be less than 50
// Post: The array is sorted by ID or Title
void sortGames(VideoGame games[], int array_size);

#endif