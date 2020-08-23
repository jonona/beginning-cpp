#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;
public:
    Movie(std::string name, std::string rating, int watched);
    Movie(const Movie &source);
    ~Movie();
    
    void set_name(std::string n) {name=n;}
    void set_rating(std::string r) {rating=r;}
    void set_watched(int w) {watched=w;}
    std::string get_name() const {return name;}
    std::string get_rating() const {return rating;}
    int get_watched() const {return watched;}
    
    void increment_watched() {++watched;}
    
    void display() const;
};

#endif // _MOVIE_H_
