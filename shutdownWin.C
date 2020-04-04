#include<stdio.h>
#include<stdlib.h>

int main(){

float hrs, min, x,y;
double p;
int res;

x = 0;
y = 0;
p = 0;
hrs = 0;
min = 0;

system("title ShutdownWin by aego");
printf("\nEste es un programa para apagar la computadora en un determinado tiempo \n\n");
system("color a");
system("pause");
inicioOpciones:
system("cls");
printf("\n (1) Apagar pc inmediatamente (apagado normal)");
printf("\n (2) Apagar pc inmediatamente (apagado hibrido)");
printf("\n (3) Reiniciar pc");
printf("\n (4) Suspender pc");
printf("\n (5) Hibernar pc");
printf("\n (6) Programar apagado de pc (apagado normal)");
printf("\n (7) Programar apagado de pc (apagado hibrido)");
printf("\n (8) Cancelar apagado programado");
printf("\n (9) Salir");
printf("\n\n Ingresa el numero de la opcion que desees: ");
scanf("%i",&res);

switch(res){

   case 1: system("shutdown /p");break;              //apaga inmediatamente normal
   case 2: system("shutdown /s /hybrid /t 0");break; //apaga inmediatamente modo hibrido
   case 3: system("shutdown /r");break;              //reinicia
   case 4: system("shutdown /l");break;              //suspende
   case 5: system("shutdown /h");break;              //hiberna
   case 6: system("shutdown /s /t 3600");            //programa apagado normal
   break;
   case 7: system("cls");
           printf("\n para omitir pon 0");
           printf ("\n\n Indica cuantas horas: ");
           scanf("%f",&hrs);
           system("cls");
           printf("\n para omitir pon 0");
           printf("\n\n Introduce cuantos minutos: ");
           scanf("%f",&min);
           printf(" \n El programa inicio\n");
           printf(" ADVERTENCIA:  Manten el programa abierto\n");
           system("pause");
           y = min * 60;
           x = hrs * 3600;
           //operaciones
           p = x + y;
           p *= 16363;

           while(p > 0){
              printf("\n %f",p);
              p--;
              if(p == 0){
                 system("shutdown /s /hybrid");
              }
           }
            break;
   case 8: system("shutdown /a");break;              //cancela apagado
   case 9: return 0;break;                           //termina programa
   default: printf(" La opcion no es valida\n");
            system("pause");
            goto inicioOpciones;

   }
return 0;
}
