#include <stdio.h>
#include <string.h>
struct employees
{
    int emp_id;
    char name[20];
    int date_1;
    long mobileno;
} s[10];
int main()
{
    int n;
    scanf("%d", &n);
    char sr[30];
    char c[100][100], t[100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee ID: ");
        scanf("%d", &s[i].emp_id);
        printf("Enter the employee name: ");
        scanf("%s", s[i].name);
        printf("Enter year of joining: ");
        scanf("%d", &s[i].date_1);
        printf("Enter employee's mobileno: ");
        scanf("%ld", &s[i].mobileno);
    }

    for (int i = 0; i < n; i++)
    {
        sprintf(sr, "%ld", s[i].mobileno);
        if (strlen(sr) == 10 && (sr[0] == '9' || sr[0] == '8' || sr[0] == '7'))
        {
            printf("Yes phone number is valid for empid: %d\n", s[i].emp_id);
        }
        else
        {
            printf("No phone number is not valid for empid: %d\n", s[i].emp_id);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if ((s[i].emp_id) % 5 == 0)
        {
            if (s[i].date_1 < 2020)
            {
                printf("%s\n", s[i].name);
                printf("%ld", s[i].mobileno);
            }
        }
    }

    return 0;
}