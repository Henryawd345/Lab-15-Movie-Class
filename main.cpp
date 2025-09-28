#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <iomanip>

using namespace std;

class Movie{
    private:
        string screenWriter;
        int yearReleased;
        string titleCard;

    public:
        string getScreenwriter() {return screenWriter;}
        int getYearreleased() {return yearReleased;}
        string getTitlecard() {return titleCard;}
        void setScreenwriter(string sw) {screenWriter = sw;}
        void setYearreleased(int yr) {yearReleased = yr;}
        void setTitlecard(string tc) {titleCard = tc;}

    void print() {
        cout << "Movie: " << titleCard << "\n" 
        << "Year released: " << yearReleased << "\n"
        << "Screenwriter: " << screenWriter << "\n";
}
};