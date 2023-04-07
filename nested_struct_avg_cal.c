// nested structure to calculalte department average
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("enter the no.of inputs\n");
    scanf("%d", &n);
    char dep_name[n][10];
    struct stu_details
    {
        char name[20];
        char email_id[50];
        char num[10];
        int percentage;
    };
    struct department
    {
        char dept_name[5];
        struct stu_details sd;
        int total_avg;
    } dept[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %s %d %s", dept[i].sd.name, dept[i].sd.email_id, dept[i].sd.num, &dept[i].sd.percentage, dept[i].dept_name);
        strcpy(dep_name[i], dept[i].dept_name);
    }
    // remove duplicatinos of dept_name
    int size = n;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (strcmp(dep_name[i], dep_name[j]) == 0)
            {
                strcpy(dep_name[j], dep_name[size - 1]);
                size--;
                j--;
            }
        }
    }
    // total_avg calculation
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        dept[i].total_avg = 0;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(dep_name[i], dept[j].dept_name) == 0)
            {
                dept[i].total_avg += dept[j].sd.percentage;
                count++;
            }
        }
        dept[i].total_avg /= count;
        printf("%s-%d%\n", dep_name[i], dept[i].total_avg);
    }
    return 0;
}
