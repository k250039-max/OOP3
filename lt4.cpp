#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{
private:
    string name;
    int jerseyNumber;
    int totalRuns;
    int innings;
    double battingAverage;

    void calculateAverage()
    {
        if (innings == 0)
            battingAverage = 0;
        else
            battingAverage = (double) totalRuns / innings;
    }

public:
    CricketPlayer(string n, int j, int runs, int inns)
    {
        name = n;
        jerseyNumber = j;
        totalRuns = runs;
        innings = inns;
        calculateAverage();
    }

    void playMatch(int runsScored)
    {
        totalRuns += runsScored;
        innings++;
        calculateAverage();
    }

    void displayPlayerStats()
    {
        cout << "Player Name: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Innings Played: " << innings << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << "Commentary: This batting average is more consistent than Karachi's weather!" << endl;
        cout << "--------------------------------------" << endl;
    }
};

int main()
{
    CricketPlayer p1("Babar Azam", 56, 5000, 102);
    CricketPlayer p2("Muhammad Rizwan", 16, 4200, 95);
    CricketPlayer p3("Saim Ayub", 63, 800, 25);

    p1.playMatch(102);
    p1.playMatch(65);
    p1.displayPlayerStats();

    p2.playMatch(88);
    p2.displayPlayerStats();

    p3.playMatch(0);
    p3.playMatch(45);
    p3.displayPlayerStats();

    return 0;
}
