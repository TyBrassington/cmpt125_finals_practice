#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char *name;
    int id;
    double salary;
};

void initializeEmployee(struct Employee *emp, const char name, int id, double salary){
    printf("Reached");
    emp->name = (char *)malloc((strlen(&name) + 1) * sizeof(char));
    emp->id = id;
   emp->salary = salary;

}
void printEmployee(const struct Employee *emp);
/*
int main()
{
    int numEmployees;
    printf("Enter the number of employees: ");
    if (scanf("%d", &numEmployees) != 1 || numEmployees < 5 || numEmployees > 40) return 1;
    struct Employee *employees = (struct Employee*)malloc(numEmployees * sizeof(struct Employee));
    if (employees == NULL) return 1;

    for (int i = 0; i < numEmployees; i++){
        printf("test %d", i);
        char name[64];
        int id = 0;
        double salary = 0;

        printf("Employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", name);
        printf("ID: ");
        scanf("%d", &id);
        printf("Salary: ");
        scanf("%lf", &salary);
        initializeEmployee(&employees[i], (char) name, id, salary);
    }
    for (int i = 0; i < numEmployees; i++){
        //printEmployee(&employees[i]);
    }

    for (int i = 0; i < numEmployees; i++){
        free(employees[i].name);
    }
    free(employees);
    employees = NULL;
    return 0;
}*/