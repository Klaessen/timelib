/**
 *
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 Florian Klaessen
 BBS-LF5 IFA-13 
 16.05.22 dayOfYear
 **/

//returns true if leap year, false if not and -1 if error
int is_leapyear(int year) {

    if(year<1582){
        return -1;
    }
     // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      return  1;
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      return  0;
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      return  1;
   }
   // all other years are not leap years
   else {
      return  0;
   }
}

//returns the number of days in a month
int get_days_for_month(int month, int year) {
    int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(is_leapyear(year) && month == 2){
        return daysPerMonth[month-1]+1;
    }
    return daysPerMonth[month-1];

}

//checks if the date is valid
int exists_date(int day, int month, int year){

        if(month > 12 && month < 1) {
            return 0;
        }
        if (get_days_for_month(month, year) < day) {
            return 0;
        }
        if(year > 2400 || year <1582){
            return 0;
        }
        return 1;
}

//returns number of days for a given date
int day_of_the_year(int day, int month, int year) {
    int daysOfYear = 0;
    //add days per motnh
    for(int i =0; i < (month-1); i++) {
        daysOfYear += get_days_for_month(i+1, year);
    }
    daysOfYear += day;
    return daysOfYear;
}

//returns the day of the week
void weekday(int day, int month, int year, char helper[]) {
    int daysOfYear = day_of_the_year(day, month, year);
    int weekday = daysOfYear % 7;
    
        switch(weekday){
        case 1:
            strcpy(helper, "Monday");
            break;
        case 2:
            strcpy(helper, "Tuesday");
            break;
        case 3:
            strcpy(helper, "Wednesday");
            break;
        case 4:
            strcpy(helper, "Thursday");
            break;
        case 5:
            strcpy(helper, "Friday");
            break;
        case 6:
            strcpy(helper, "Saturday");
            break;
        case 7:
            strcpy(helper, "Sunday");
            break;
        default:
            strcpy(helper, "Error");
            break;
    }
}

//returns the day of the week
int calendar_week(int day, int month, int year) {
    int daysOfYear = day_of_the_year(day, month, year);
    int weekday = daysOfYear % 7;
    int week = daysOfYear / 7;
    if(weekday == 0) {
        return week;
    }
    return week + 1;
}

//saves user input to variables
void input_date(int *day, int *month, int *year) {
    
    printf("Day of year calculator\n");
    printf("Enter day: ");
    scanf("%d", day);
    printf("Enter month: ");
    scanf("%d", month);
    printf("Enter year: ");
    scanf("%d", year);
}

int main()
{
    //variables
    int year = 0;
    int month = 0;
    int day = 0;
    char helper[20];
   
    //loop input while date is invalid
    while (!exists_date(day, month, year)){
        //input
        input_date(&day, &month, &year);
 }

weekday(day, month, year, helper);
//output
printf("Day of year: %i\n", day_of_the_year(day, month, year));
printf("Weekday: %s\n", helper);
printf("Calendar week: %i\n", calendar_week(day, month, year));
return 0;
}