//s even & odd numbers from 50 to 70 into two separate files.
#include <stdio.h>

int main() {
    FILE *even;
	FILE *odd;
    int i;

  
    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if(even == NULL || odd == NULL){
        printf("unavailbe the files.\n");
        
    }


    for (i=50;i<=70;i++){
        if (i % 2 == 0) {
           fprintf(even, "%d ",i);
           
        } else {
         fprintf(odd, "%d ",i);
        
        }
    }

  
    fclose(even);
    fclose(odd);

    printf("Even and odd numbers  files successfully.\n");

    return 0;
}
