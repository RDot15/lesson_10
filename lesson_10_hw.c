#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define SIZE 100
extern void drop_space(int, char*);


int main()
{

char *input = "input.txt";
char *output = "output.txt";
    
char stroka[SIZE];

FILE *fp;
fp = fopen(input, "r");
 if((fp = fopen("input.txt", "r")) == NULL)
{
    printf("Alert! File not open. \n");
    return 1;
}

while (!feof(fp))
{
    if (fscanf(fp, "%[^\n]", stroka) > 0);  
}
 fclose(fp); 
 drop_space(strlen(stroka),stroka);
 
 fp = fopen(output, "w");
 fprintf(fp, "%s", stroka);
 fclose(fp);




    return 0;
}

