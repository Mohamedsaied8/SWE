#include <iostream>
/*
Monday 1 
Tues   2
Wed    3
Thurs  4
Fri    5
Sat    6
Sun    7
*/

enum WeekDays
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
    WEEK_DAYS = 7
};

int main()
{
    int meeting_day = 0;
    int period_from_now = 10;
    int current_day = 0;
    std::cout << "please enter the current day\n";
    std::cin >> current_day;

    std::string day("");
    meeting_day = (current_day + period_from_now) %  WEEK_DAYS;

    switch(meeting_day)
    {
        case Tuesday: 
            day = "Tuesday";
            break;

        case Wednesday:
            day = "Wednesday";
            break;

        case Thursday:
            day = "Thursday";
            break;     
        default:
            day = "non-valid day";
            break;
    }

    std::cout << "meeting day is " << day << std::endl;

    return 0;
}