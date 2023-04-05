#include <iostream>
using namespace std;

class Movie {
private:                                                                // only functions inside this class can reach rating
    string rating;
public:                                                                 // any file including this file can reach these variables
    string title;
    string director;
    Movie(string aTitle, string aDirector, string aRating){             // object constructor
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating){
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
            rating = aRating;
        } else {
            rating = "NR";
        }
    }
    string getRating(){
        return rating;
    }
};

int gettersAndSetters(){

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("Dog");          // this will say NR because Dog is not a valid rating
    cout << avengers.getRating();

    return 0;
}