# ifndef _MOVIES_H_
# define _MOVIES_H_

# include <bits/stdc++.h>
# include <vector>
# include <string>

# include "Movie.h"

class Movies {

    private:
        std::vector<Movie> movies;

    public:
        
        Movies();           //Constructor

        ~Movies();          //Deconstructor

        bool add_movie(std::string movie_name, std::string movie_rating, int movie_watched);
        bool increment_watched(std::string movie_name);
        void display() const;
};

# endif