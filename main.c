#include<function.h>

int main()
{
    int key;
    printf("[1] Add\t[2] Subtract\t[3] Multiply\t[4] Divide\t[5]modulus\t[6]factorial\t[7]power\n");
    scanf("%d", &key);
 
        switch(key)
        {
            case '1': add();
                      break;
 
            case '2': sub();
                      break;
 
            case '3': mul();
                      break;
 
            case '4': div();
                      break;
 
            case '5': modulus();
                      break;
 
            case '6': factorial();
                      break;
 
            case '7': power();
                      break;
            default:
             printf("\n**********You have entered unavailable option");
             printf("***********\n");
 
        }
    }
