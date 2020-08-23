/*************************************
 * Class Movie models a movie with Name, Rating and Watched count
 * Class Movies models a collection of Movie objects
 * 
 * Movies needs to know about Movie, but main only interacts with Movies
 * 
 * Main has to be able to:
 * - create a Movies object
 * - ask the Movies object to add a movie by name, rating and watched count
 * - ask the Movies object to increment the watched count
 * - ask the Movies object to display all of its movies
 *************************************/



#include <iostream>
#include "Movies.h"

using namespace std;

// Function prototypes
void increment_watched(Movies &movies, string name);
void add_movie(Movie &movies, string name, string rating, int watched);

/**************************************
 * Increment_watch expects a reference to a Movies object and the name 
 * of the movie. If watched_count was incremented successfully, it displays
 * a success message. If the movie wasn't found it displays an error message.
 *************************************/
 
 void increment_watched(Movies &movies, string name){
     if (movies.increment_watched(name)) {
         cout << name << " watch incremented" << endl;
     } else {
         cout << name << " not found" << endl;
     }
 }
 
 /************************************
  * Add_movie adds new movie to the Movies object. If movie was added - 
  * success message, if this movie is already on the list - error message
  ************************************/
  
void add_movie(Movies &movies, string name, string rating, int watched){
    if (movies.add_movie(name,rating,watched)) {
        cout << name << " added" << endl;
    } else {
        cout << name << " already exists" << endl;
    }
}



int main()
{
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Cinderella", "PG", 7);
    
    my_movies.display();
    
    add_movie(my_movies, "Cinderella", "PG", 7); // already exists
    add_movie(my_movies, "Ice Age", "PG", 12);
    
    increment_watched(my_movies, "Big");
    increment_watched(my_movies, "Ice Age");
    
    my_movies.display();
    
    increment_watched(my_movies, "XXX"); // not found
    
	cout <<  endl;
	return 0;
}
