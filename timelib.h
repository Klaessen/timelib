#ifndef BIBLIOTHEK_H_INCLUDED
#define BIBLIOTHEK_H_INCLUDED



int is_leapyear(int year);

int get_days_for_month(int month, int year);

int exists_date(int day, int month, int year);

int day_of_the_year(int day, int month, int year);

void weekday(int day, int month, int year, char helper[]);

int calendar_week(int day, int month, int year);

void input_date(int *day, int *month, int *year);


#endif // BIBLIOTHEK_H_INCLUDED