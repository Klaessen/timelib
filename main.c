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
    struct date date;
    char helper[20];
   
    //loop input while date is invalid
    while (!exists_date(date)){
        //input
        date = input_date();
 }

weekday(date, helper);
//output
printf("Day of year: %i\n", day_of_the_year(date));
printf("Weekday: %s\n", helper);
printf("Calendar week: %i\n", calendar_week(date));
return 0;
}