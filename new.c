#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    int date;
    int month;
    int year;
    long int mobilenumber;
};
int main()
{
    struct employee e[100];
    int n, i = 0, t = 0, y = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &e[i].id);
        ;
        scanf("%s", e[i].name);
        scanf("%d", &e[i].date);
        scanf("%d", &e[i].month);
        scanf("%d", &e[i].year);
        scanf("%ld", &e[i].mobilenumber);
    }
    for (i = 0; i < n; i++)
    {
        t = -(e[i].year);
        y = e[i].id;

        if (t < 2020 && y % 5 == 0)
        {
            printf("%s %ld\n", e[i].name, e[i].mobilenumber);
        }
    }
}