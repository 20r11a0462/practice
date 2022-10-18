#include <stdio.h>
#include <stdbool.h>


    void checkbit(int N,int i){
        if(((N>>i)%2)!= 0)
            printf("true");
        else
            printf("false");
    }
     int main(){
         int N ,i;
         scanf("%d", &N); 
         scanf("%d", &i); 
         
         checkbit(N,i);
         return 0;
         
     }
