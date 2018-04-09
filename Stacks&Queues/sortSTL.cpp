    #include <iostream>
    #include <algorithm>
    using namespace std;
     
    class Movie{
        public:
        string title;
        int release_year;
        void print(){
            cout << title << " " << release_year << endl;
        }
    };
     
     
    bool compareMovieRY(Movie a, Movie b){
        // shall movie a come before movie b
        if (a.release_year < b.release_year){
            return true;
        }
        return false;
    }
     
    // compare based on movie title
      bool compareMovieByTitle(const Movie& a, const Movie& b){
        // shall movie a come before movie b
        if(a.title<b.title){
            return true;
        }else{
            return false;
        }
    }
     
     
    int main(){
     
        // Using contructor function on an array of objects.
        // If no contructor function, public data members are allocated
        // as they are declared in the class.
        Movie mArr[] = {
            {"baghi 2", 2010},
            {"3 idiots", 2014},
            {"interstellar", 2014},
            {"bahubali 2", 2017},
            {"shashwank redemption", 1996},
            {"wolf of wall street", 2013},
            {"titanic", 1996}
        };
     
        int n = sizeof(mArr)/sizeof(Movie);    // 7
     
        sort(mArr, mArr + n, compareMovieRY);
     
     
        for (int i = 0; i < n; ++i)
        {
            mArr[i].print();
        }
     
    }