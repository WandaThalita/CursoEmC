#include <stdio.h> 
#include <stdlib.h> 

int main () {

    int num = 0;

    if (num%2==0) {
       
        while (num <= 100) {
            
            printf ("%d\n\n", num);
            (num = num + 2);}
    }

return 0;

}