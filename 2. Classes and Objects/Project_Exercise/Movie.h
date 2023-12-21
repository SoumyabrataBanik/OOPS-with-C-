# ifndef _MOVIE_H_
# define _MOVIE_H_
# include <string>

class Movie {

    private:
        std::string name;
        std::string rating;
        int watched;

    public:

        Movie (std::string name_val, std::string rating_val, int watched_val);          // Constructor

        Movie (const Movie &source);                                                    // Copy Constructor

        ~Movie();

        void set_name(std::string name_val);
        std::string get_name() const;

        void set_rating(std::string rating_val);
        std::string get_rating() const;

        void set_watched(int watched_val);
        int get_watched() const;

        void increment_watched();

        void display_movie() const;
};

# endif