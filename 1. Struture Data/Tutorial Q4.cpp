#include <iostream>
#include <string>
using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

void displayMovieInfo(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << endl;
}

int main() {
    MovieData movie1;
    movie1.title = "The Shawshank Redemption";
    movie1.director = "Frank Darabont";
    movie1.yearReleased = 1994;
    movie1.runningTime = 142;

    MovieData movie2;
    movie2.title = "Inception";
    movie2.director = "Christopher Nolan";
    movie2.yearReleased = 2010;
    movie2.runningTime = 148;

    displayMovieInfo(movie1);
    displayMovieInfo(movie2);

    return 0;
}