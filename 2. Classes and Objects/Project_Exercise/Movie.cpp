# include <bits/stdc++.h>
# include <string>

# include "Movie.h"

Movie::Movie (std::string name_val, std::string rating_val, int watched_val) 
    : name{name_val}, rating{rating_val}, watched{watched_val} {

    }

Movie::Movie (const Movie &source)
    : Movie {source.name, source.rating, source.watched} {}

Movie::~Movie() {

}

void Movie::set_name(std::string name_val) {
    this->name = name_val;
}


std::string Movie::get_name() const {
    return this->name;
}

void Movie::set_rating(std::string rating_val) {
    this->rating = rating_val;
}

std::string Movie::get_rating() const {
    return this->rating;
}

void Movie::set_watched(int watched_val) {
    this->watched = watched_val; 
}

int Movie::get_watched() const {
    return this->watched;
}

void Movie::increment_watched() {
    ++this->watched;
}

void Movie::display_movie() const {
    std::cout << this->get_name() << ", " << this->get_rating() << ", " << this->get_watched() << std::endl;
}