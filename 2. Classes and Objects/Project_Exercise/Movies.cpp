# include <bits/stdc++.h>
# include <string>

# include "Movie.h"
# include "Movies.h"

Movies::Movies() {

}

Movies::~Movies() {

}

bool Movies::add_movie(std::string movie_name, std::string movie_rating, int movie_watched) {
    for (const Movie &movie: movies) {
        if (movie.get_name() == movie_name)
            return false;
    }
    
    Movie newMovie {movie_name, movie_rating, movie_watched};
    movies.push_back(newMovie);
    return true;
}

bool Movies::increment_watched(std::string movie_name) {
    for (Movie &movie: movies) {
        if (movie.get_name() == movie_name) {
            movie.increment_watched();
            return true;
        }
    }

    return false;
}

void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "No Movies to display";
    } else {
        std::cout << "\n===================================================" << std::endl;

        for (const Movie &movie: movies) {
            movie.display_movie();
        } 
        std::cout << "\n===================================================" << std::endl;
    }
}