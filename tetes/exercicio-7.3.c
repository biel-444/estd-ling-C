#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    for (i = 0; i <=10; i++)
    {

       if(i == 10){
        break; // usado para quebrar o laço de repetição na parte onde vc quiser
       }
       
       if (i == 4)
       {
        continue;
       }
       printf("%d ", i);
       
    }
    
    return 0;
}
