#include<stdio.h>
#include<stdlib.h>

int main(){

int hrs, min, x, y, res, opt;
char comandone[]="shutdown /s /t ";
char comandtwo[]="shutdown /s /hybrid /t ";
char tiempoTotal[10];

hrs = 0;
min = 0;

system("title ShutdownWin by aego");
printf("\nEste es un programa para apagar la computadora con opcion de agregar un temporizador entre otras cosas \n\n");
system("color f");
system("pause");
inicioOpciones:
system("cls");
printf("\n  (1) Apagar pc inmediatamente (apagado normal)");
printf("\n  (2) Apagar pc inmediatamente (apagado hibrido)");
printf("\n  (3) Reiniciar pc");
printf("\n  (4) Suspender pc");
printf("\n  (5) Hibernar pc");
printf("\n  (6) Programar apagado de pc (apagado normal)");
printf("\n  (7) Programar apagado de pc (apagado hibrido)");
printf("\n  (8) Cancelar apagado programado");
printf("\n  (9) Salir");
printf("\n\n Ingresa el numero de la opcion que desees: ");
scanf("%i",&opt);

switch(opt){

    case 1: system("shutdown /p");break;              //apaga inmediatamente normal
    case 2: system("shutdown /s /hybrid /t 0");break; //apaga inmediatamente modo hibrido
    case 3: system("shutdown /r");break;              //reinicia
    case 4: system("shutdown /l");break;              //suspende
    case 5: system("shutdown /h");break;              //hiberna
    case 6: system("cls");                            //programa apagado normal
            printf("\n Ingresa las horas: ");
            scanf("%d", &hrs);
            printf("\n Ingresa los minutos: ");
            scanf("%d", &min);
            x = hrs * 3600;
            y = min * 60;
            res = x + y;
            sprintf(tiempoTotal, "%d", res);
            strcat(comandone, tiempoTotal);
            system(comandone);
            break;
    case 7: system("cls");                            //programa apagado hibrido
            printf("\n Ingresa las horas: ");
            scanf("%d", &hrs);
            printf("\n Ingresa los minutos: ");
            scanf("%d", &min);
            x = hrs * 3600;
            y = min * 60;
            res = x + y;
            sprintf(tiempoTotal, "%d", res);
            strcat(comandtwo, tiempoTotal);
            system(comandtwo);
            break;
   case 8: system("shutdown /a");break;              //cancela apagado
   case 9: return 0;break;                           //sale de programa
   default: printf(" La opcion no es valida\n");
            system("pause");
            goto inicioOpciones;

   }
return 0;
}
