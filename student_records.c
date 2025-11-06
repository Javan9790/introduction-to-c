/*
Javan Ichingwa
PA106/G/28767/25
Program to enter student records in file
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the filename for the binary results file
#define FILENAME "results.dat"

// i. Define a structure to hold the student information
typedef struct {
    char name[50];
    char reg_number[15];
    int total_marks;
} Student;


int main() {
    // --- Mock File Creation (for immediate testing) ---
    Student students[] = {
        {"Javan Ichingwa", "G/28767", 95},
        {"Simiyu Smith", "U23002", 72},
        {"Charlie Brown", "U23003", 91},
        {"Diana Prince", "U223004", 78}
    };
    int count = sizeof(students) / sizeof(students[0]);

    // Create/overwrite file in write binary mode ('wb')
    FILE *w_file = fopen(FILENAME, "wb");
    if (w_file == NULL) {
        perror("Error creating file");
        return EXIT_FAILURE;
    }
    fwrite(students, sizeof(Student), count, w_file);
    fclose(w_file);
    // --- End Mock File Creation ---

    FILE *file_ptr;
    Student current_student;
    int records_read = 0;

    // ii. Open the binary file in read binary mode
    file_ptr = fopen(FILENAME, "rb");

    if (file_ptr == NULL) {
        perror("Error: Cannot open the binary file for reading");
        return EXIT_FAILURE;
    }

    printf("--- Student Examination Results ---\n");
    printf("--------------------------------------\n");
    printf("%-30s | %s\n", "Student Name", "Total Marks");
    printf("--------------------------------------\n");

    // Loop to read records one by one
    while (fread(&current_student, sizeof(Student), 1, file_ptr) == 1) {
        // iii. Display the name and marks of each student
        printf("%-30s | %d\n", current_student.name, current_student.total_marks);
        records_read++;
    }

    printf("--------------------------------------\n");
    printf("Total records displayed: %d\n", records_read);

    // Check for a reading error other than EOF
    if (ferror(file_ptr)) {
        fprintf(stderr, "A reading error occurred during file processing.\n");
    }

    // Close the file
    fclose(file_ptr);

    return 0;
}