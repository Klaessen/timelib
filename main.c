/**
 *
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"

/**
 Florian Klaessen
 BBS-LF5 IFA-13 
 16.05.22 dayOfYear
 **/



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