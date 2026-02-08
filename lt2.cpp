#include <iostream>
#include <string>
using namespace std;

class WeekDays
{
private:
    string Days[7];
    int CurrentDay;

    
    void fillDays()
    {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
    }

public:
    
    WeekDays()
    {
        fillDays();
        CurrentDay = 0; 
    }

    
    WeekDays(int day)
    {
        fillDays();

        
        while (day > 6)
        {
            day = day % 7;
        }

        CurrentDay = day;
    }

    
    string getCurrentDay()
    {
        return Days[CurrentDay];
    }

    // Returns next day
    string getNextDay()
    {
        int nextDay = CurrentDay + 1;

        if (nextDay > 6)
            nextDay = 0;

        return Days[nextDay];
    }

    
    string getPreviousDay()
    {
        int prevDay = CurrentDay - 1;

        if (prevDay < 0)
            prevDay = 6;

        return Days[prevDay];
    }

    
    string getNthDayFromToday(int n)
    {

        while (n > 6)
        {
            n = n % 7;
        }

        int futureDay = CurrentDay + n;

        if (futureDay > 6)
            futureDay = futureDay % 7;

        return Days[futureDay];
    }
};
int main()
{
    WeekDays w(8);  

    cout << "Today: " << w.getCurrentDay() << endl;
    cout << "Tomorrow: " << w.getNextDay() << endl;
    cout << "Yesterday: " << w.getPreviousDay() << endl;
    cout << "20 days from today: " << w.getNthDayFromToday(20) << endl;

    return 0;
}

