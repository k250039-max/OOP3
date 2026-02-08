#include <iostream>
#include <string>
using namespace std;

class FootballPlayer
{
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer()
    {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    FootballPlayer(string name, string pos, int goals)
    {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    FootballPlayer(const FootballPlayer &p)
    {
        playerName = p.playerName;
        position = p.position;
        goalCount = p.goalCount;
    }

    FootballPlayer(string name, string pos = "Midfielder", int goals = 10)
    {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    void scoreGoals(int goals)
    {
        goalCount += goals;
    }

    void displayProfile()
    {
        cout << "Player Name: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goals Scored: " << goalCount << endl;
        cout << "Status: Ready for the Ballon d'Or!" << endl;
        cout << "-------------------------------" << endl;
    }
};

int main()
{
    FootballPlayer f1;
    f1.displayProfile();

    FootballPlayer f2("Cristiano Ronaldo", "Forward", 850);
    f2.scoreGoals(2);
    f2.displayProfile();

    FootballPlayer f3("Lionel Messi");
    f3.scoreGoals(5);
    f3.displayProfile();

    FootballPlayer f4(f2);
    f4.displayProfile();

    return 0;
}
