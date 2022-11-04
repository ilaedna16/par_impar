#include <stdio.h>

    void par_impar (int p) { 
        if (p % 2 ==0) { 
            printf ("%i e par!", p); 
        } 
        else { 
            printf ("%i e impar!", p); 
            
        } 
    } 
    
    int main (){ 
        
        int n; 
        printf ("digite um valor inteiro:"); 
        scanf ("%d", &n); 
        par_impar (n); 
       
          return 0; 
        
    } 
