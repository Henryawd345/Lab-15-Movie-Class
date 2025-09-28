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
        cout << "Movie: " << screenWriter << "\n" 
        << "Year released: " << yearReleased << "\n"
        << "Screenwriter: " << titleCard << "\n";
}

};

int main() {

    vector<Movie> movie_vec;
    ifstream readfile("input.txt");

    if (!readfile) { cout << "File not found\n"; return 1;}

    for (int i =0; i < 4; i++){
        string title, writer; int year;

        getline(readfile, title);
        if (!readfile) break;

        readfile >> year;
        readfile >> ws;

        getline(readfile, writer);
        if (!readfile) break;

        Movie temp;
        temp.setTitlecard(title);
        temp.setYearreleased(year);
        temp.setScreenwriter(writer);
        movie_vec.push_back(temp);
    }

    for (auto m : movie_vec) {cout << "\n"; m.print();}
}