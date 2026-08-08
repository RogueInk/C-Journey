#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Using typedef to give the struct a nickname of "Student"
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

//Another struct using typedef to give struct nickname "Car"

typedef struct{
    char model[25];
    int year;
    int price;
}Car;


// Function prototype
void printStudent(Student student);

int main() {
    // Declaring an array of Car structs and initializing them directly
    Car cars[] = {
        {"Mustang", 2025, 32000},
        {"Corvette", 2026, 68000},
        {"Challenger", 2024, 29000}
    };

    // Calculating the number of elements in the array
    int number = sizeof(cars) / sizeof(cars[0]);

    // Looping through the array of structs using an index
    for (int i = 0; i < number; i++) {
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    // Initializing structs with values right away
    Student student1 = {"Spongebob", 30, 2.5, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 48, 3.2, false};
    
    // Initializing a struct with zeros to clear out garbage memory values
    Student student4 = {0}; 
    
    // Manually assigning members after initialization
    strcpy(student4.name, "Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    // Calling a function and passing our structs as arguments
    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}

// Function to print the members of a passed Student struct
void printStudent(Student student) {
    printf("name: %s\n", student.name);
    printf("age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("full-time: %s\n\n", (student.isFullTime) ? "yes" : "no");
}
