#include <stdio.h>


int main(void)

{
    
int n, m;
    
/* Inputing*/
    
printf("Give me two numbers\n");
    
scanf("%i %i",&n, &m);
    
/* First task*/
    
printf("Answers:\n");
    
printf("%i\n", n - --m );
    
/* Second task*/
    
printf("%s\n", m--<n?"True":"False");
    
/* Third task*/
    
printf("%s\n", n++>m?"True":"False");

    
return 0;

}
