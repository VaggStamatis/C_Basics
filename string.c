/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/2024
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    /*Declaring strings*/
    char str1[] = "Hello";
    char str2[6] = "World";
    char str3[] = {'h','e','l','l','o','\0'}; 

    printf("%s, %s\n" , str1,str2);
    

    //Readinng and prinnting strinngs
    /*
    char str[100];
    printf("Enter a String: ");
    scanf("%99s", str);
    printf("You entered: %s\n", str);
    */
   
    //to read strings with spaces use fgets
    char strspaces[100];
    printf("Enter a String: ");
    fgets(strspaces, sizeof(strspaces), stdin);
    printf("You entered: %s\n", strspaces);    

    //string lenght strlen
    char a[] = "This is a Phrase";
    int length = strlen(a);
    printf("The strings lenght is : %d\n", length);

    //string copy strcpy
    char src[] = "source";
    char dst[50];

    strcpy(dst,src);
    printf("Dst string is: %s\n", dst);

    //concatenate strings strcat
    char addon[50] = "Hello ";
    char tobeadded[] = "MATIES";

    strcat(addon,tobeadded);
    printf("Concatenated string is: %s\n", addon);

    //string comparison strcmp
    char compare1[] = "One";
    char compare2[] = "Two";
    char compare3[] = "One";

    if(strcmp(compare1,compare2)== 0){
        printf("Strings compare1 and compare2 are equal\n");
    }else{
        printf("Strings compare1 and compare2 are not equal\n");
    }

    if(strcmp(compare1,compare3)==0){
        printf("Strinngs compare1 and compare3 are equal\n");
    }else{
        printf("Strings compare1 and compare3 are not equal\n");
    }

    //string tokenization strtok
    char strtobetoked[] = "Hello, World! This is C.";
    char *token = strtok(strtobetoked, ",.!");

    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, ",.!");
    }
    /*tokenized output
        Hello
        World
        This is C
    */

   // character operation with strchr and strrchr
   char operated[] = "Hello My Friends this is a Test";
   char *pos= strchr(operated, 'e');  //finds first occurance of letter 'e' in the string

    if(pos != NULL){
        printf("First occurance of 'e' found in position: %d\n", pos-operated);
    }

    pos = strrchr(operated , 'e'); //finds last occurance of letter 'e' in string
    if(pos != NULL){
        printf("Last occurance of 'e' found in position: %d\n", pos-operated);
    }

    // dynamiclly allocated string
    char *dyn_str;
    dyn_str = (char *) malloc( 15 * sizeof(char));
    if(dyn_str == NULL){
        printf("String not allocated corectly");
        exit(0);
    }
    strcpy(dyn_str , "Dynamic String");
    printf("Dynamiclly allocated string contains followinng data: %s\n", dyn_str);
    free(dyn_str);

    return 0;
}