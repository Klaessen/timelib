#ifndef BIBLIOTHEK_H_INCLUDED
#define BIBLIOTHEK_H_INCLUDED

//define date struct
struct date {
    int day;
    int month;
    int year;
};

int is_leapyear(int year);

int get_days_for_month(int month, int year);

int exists_date(struct date date);

int day_of_the_year(struct date date);

void weekday(struct date date, char helper[]);

int calendar_week(struct date date);

struct date input_date();

#endif // BIBLIOTHEK_H_INCLUDED