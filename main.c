#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int num;
    num = rand() % 1001; // genero un numero random entre 0 y 1000
    int resp = 0;

    do  ///Este do while va a seguir mientras que respuesta sea diferente del numero a adivinar
    {
        if(resp != num)
        {
            printf("Intente adivinar el numero (0 a 1000): ");
            scanf("%i", &resp);
            if(resp > num)          ///Si la respuesta ingresada es mayor entonces el programa te avisa que el numero a adivinar es menor
            {
                printf("Es menor \n");
                system("pause");
                system("cls");
            }
            else if(resp < num)     ///Si la respuesta ingresada es menor entonces el programa te avisa que el numero a adivinar es mayor
            {
                printf("Es mayor \n");
                system("pause");
                system("cls");
            }
            else if(resp == num)       ///Si la respuesta es igual al numero a adivinar ganas
            {
                printf("Felicidades");
            }
        }
    }while(resp != num);

    return 0;
}
