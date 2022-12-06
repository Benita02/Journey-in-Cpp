#include <iostream>

using namespace std;
string getDayOfWeek (int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "INVALID DAY NUMBER FOOL!";

}
       return dayName;

}


int main()
{
        cout << getDayOfWeek(0);
        cout << getDayOfWeek(1);
        cout << getDayOfWeek(2);
        cout << getDayOfWeek(3);
        cout << getDayOfWeek(4);
        cout << getDayOfWeek(5);
        cout << getDayOfWeek(6);
    return 0;
}
