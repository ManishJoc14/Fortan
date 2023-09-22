#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct birth {
    int year, month, day;
};

struct structureEmployee {
    int age, salary;
    char name[20];
    struct birth birthdate;
};

struct structureEmployeeFromFile {
    int id, age, salary;
    char name[20];
    struct birth birthdate;
};

int main() {
    int n;
    printf("Enter the number of employees:");
    scanf("%d", &n);

    struct structureEmployee emp[n];

    printf("\nInput Data:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf("Enter age: ");
        scanf("%d", &emp[i].age);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
        printf("Enter Birth in format Year-Month-Day (use dash also): ");
        scanf("%d-%d-%d", &emp[i].birthdate.year, &emp[i].birthdate.month, &emp[i].birthdate.day);
    }

    printf("\nOutput Data:\n");
    printf("Employee\tName\t\tAge\t\tSalary\t\tBirth\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d-%d-%d\n", i + 1, emp[i].name, emp[i].age, emp[i].salary, emp[i].birthdate.year, emp[i].birthdate.month, emp[i].birthdate.day);
    }

    FILE *fp;
    fp = fopen("emp.txt", "a");
    if (fp == NULL) {
        printf("Failed opening file.");
        exit(0);
    }

    // Saving to file
    fprintf(fp, "Employee\tName\t\tAge\t\tSalary\t\tBirth\n");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d\t\t%s\t\t%d\t\t%d\t\t%d-%d-%d\n", i + 1, emp[i].name, emp[i].age, emp[i].salary, emp[i].birthdate.year, emp[i].birthdate.month, emp[i].birthdate.day);
    }

    fclose(fp); // Close the file when done with writing

    // Reopening the file for reading
    fp = fopen("emp.txt", "r");
    if (fp == NULL) {
        printf("Failed opening file for reading.");
        exit(0);
    }

    // Getting from file
    struct structureEmployeeFromFile e[n];
    printf("\nGetting from file:\n");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d\t\t%s\t\t%d\t\t%d\t\t%d-%d-%d\n", &e[i].id, e[i].name, &e[i].age, &e[i].salary, &e[i].birthdate.year, &e[i].birthdate.month, &e[i].birthdate.day);
    }
    printf("Employee\tName\t\tAge\t\tSalary\t\tBirth\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d-%d-%d\n", e[i].id, e[i].name, e[i].age, e[i].salary, e[i].birthdate.year, e[i].birthdate.month, e[i].birthdate.day);
    }

    fclose(fp); // Close the file when done with reading

    return 0;
}
