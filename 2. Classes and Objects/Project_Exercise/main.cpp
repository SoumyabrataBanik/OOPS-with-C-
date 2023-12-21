# include <bits/stdc++.h>
# include "Movies.h"
int main() {

    Movies my_movies;

    my_movies.display();

    my_movies.add_movie("Dunki", "PG-13", 1);
    my_movies.add_movie("Avengers: Endgame", "PG-13", 5);
    my_movies.add_movie("Avengers", "PG-13", 4);

    my_movies.display();

    my_movies.add_movie("Avengers", "PG-13", 4);
    
    my_movies.increment_watched("Dunki");

    my_movies.increment_watched("Funki");

    my_movies.display();

    std::cout << std::endl;
    return 0;
}