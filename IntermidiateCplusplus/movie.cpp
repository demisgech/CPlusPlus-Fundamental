#include <iostream>
#include <vector>
using namespace std;

struct Date
{
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie
{
    string title;
    Date releaseDate;
    bool isPopular;

    bool equals(const Movie &second) const
    {
        return (
            title == second.title &&
            releaseDate.year == second.releaseDate.year &&
            releaseDate.month == second.releaseDate.month &&
            releaseDate.day == second.releaseDate.day &&
            isPopular == second.isPopular);
    }
};

// Operator ovelodding
bool operator==(const Movie &first, const Movie &second)
{
    return (
        first.title == second.title &&
        first.releaseDate.year == second.releaseDate.year &&
        first.releaseDate.month == second.releaseDate.month &&
        first.releaseDate.day == second.releaseDate.day &&
        first.isPopular == second.isPopular);
}

int main()
{
    // Array structure binding
    // int numbers[] = {12, 34, 56};
    // auto [x, y, z] = numbers;
    // cout << x << "," << y << "," << z << endl;

    // Movie second = {"Terminator", 1984, true};

    //*******Object Strucure binding ******
    // C++ : Structure binding
    // JS : Destructuring
    // Python : Unpacking

    // auto [title, releaseDate, isPopular] = second;
    // // cout << title;
    // title = "Avator";
    // cout << title;

    // Using the built in vector class to allocation memory dynamically for the movies object.
    /*
      vector<Movie> movies;
      movies.push_back({"Terminator 1", 1984, true});
      movies.push_back({"Terminator 2", 1991, true});

      for (const auto &second : movies)
          cout << second.title << endl;
   */

    Movie movie1 = {"The Lion King", {1994, 1, 3}, true};
    Movie movie2 = {"The Lion King", {1994, 1, 3}, true};

    if (movie1.equals(movie2))
        cout << "Equal." << endl;
    else
        cout << "Not Equal." << endl;

    if (movie1 == movie2)
        cout << "Equal" << endl;

    // Dynamically allocating memory to resize the size of array of movie object.
    /*
      int capacity = 5;
      Movie *actionMovie = new Movie[capacity];
      int entries = 0;

      while (true)
      {
          cout << "Title: ";
          cin >> actionMovie[entries].title;
          if (cin.fail())
              break;

          cout << "Year: ";
          cin >> actionMovie[entries].releaseDate.year;
          if (cin.fail())
              break;

          cout << "Month: ";
          cin >> actionMovie[entries].releaseDate.month;
          if (cin.fail())
              break;

          cout << "Day: ";
          cin >> actionMovie[entries].releaseDate.day;
          if (cin.fail())
              break;
          entries++;

          if (entries == capacity)
          {
              capacity++;
              Movie *tempMovie = new Movie[capacity];
              for (int i = 0; i < entries; i++)
              {
                  tempMovie[i].title = actionMovie[i].title;
                  tempMovie[i].releaseDate.year = actionMovie[i].releaseDate.year;
                  tempMovie[i].releaseDate.month = actionMovie[i].releaseDate.month;
                  tempMovie[i].releaseDate.day = actionMovie[i].releaseDate.day;
                  tempMovie[i].isPopular = actionMovie[i].isPopular;
              }
              delete[] actionMovie;
              actionMovie = tempMovie;

              delete[] tempMovie;
              tempMovie = nullptr;
          }
      }

      for (int i = 0; i < entries; i++)
      {
          cout << "+++++ Movie Information Summary ++++" << endl;
          cout << "Title: " << actionMovie[i].title << endl;
          cout << "Year: " << actionMovie[i].releaseDate.year << endl;
          cout << "Month:" << actionMovie[i].releaseDate.month << endl;
          cout << "Day: " << actionMovie[i].releaseDate.day << endl;
          cout << "Is Popular: " << boolalpha << actionMovie[i].isPopular << endl;
      }

      delete[] actionMovie;
     */

    return 0;
}