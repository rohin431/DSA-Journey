 #include <stdio.h>  
    int   main() //use ctrl+z+enter to get input...
   { 
    
       long nc; 
       nc = 0; 
       while (getchar() != EOF) 
           ++nc; 
       printf("%ld\n", nc);
   }