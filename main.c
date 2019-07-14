//CHABI Alassane

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    pid_t pid1,pid2,pid3;
   //Creation du premier processus
    pid1 = fork();  
   //affichage du pid1           
    if (pid1 == 0) {                 
        printf("Processus numero 1, pid = : (%d)\n", getpid());
        return 0;                    
    }                                
    //Creation du second processus                                
    pid2 = fork();  
    //affichage du pid2           
    if (pid2 == 0) {                 
        printf("Processus numero 2, pid = : (%d)\n", getpid());
        return 0;                    
    }   
       
    //Creation du second processus
     pid3 = fork();   
  //affichage du pid3          
    if (pid3 == 0) {                 
        printf("Processus numero 3, pid = : (%d)\n", getpid());
        return 0;                    
    } 

    return 0;
}
