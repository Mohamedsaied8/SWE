#include <iostream>
enum WeekDays
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
    WEEKDAYS = 7
};
int main()
{
    std::string day("");
    constexpr int after_ten = 10;
    constexpr int current_day = 6;
 
    int meeting_day = (current_day + after_ten) % WEEKDAYS;
    switch(meeting_day)
    {
        case Tuesday:
            day = "Tueday";
            break;
        case Wednesday:
            day = "Wednesday";
            break;
        default:
            day = "non-valid day";
            break;
    }
    std::cout << "meeting day is " << day << "\n";

    return 0;
}