/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/2024
*/

#include <stdio.h>
#include <string.h>

struct Person{
    char name[59];
    int age;
    char ethnicity[50];
};

int main() {
    struct Person mikie;
    strcpy(mikie.name, "MIKE");
    strcpy(mikie.ethnicity, "Greek");
    mikie.age = 20;

    printf("%s is %s and %d years old!\n", mikie.name, mikie.ethnicity, mikie.age);
    return 0;
}