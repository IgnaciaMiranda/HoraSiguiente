#include <stdio.h>

int main(){
    int hora, minuto, segundo;
    int es_pm = 0;

    printf("Ingrese la hora (formato hh:mm:ss); ");
    scanf("%d:%d:%d", &hora, &minuto, &segundo);

    if(hora >= 12){
        es_pm = 1;
    }

    segundo++;
    if(segundo == 60){
        segundo = 0;
        minuto++;
        if(minuto == 60){
            minuto = 0;
            hora++;
            if(hora == 24){
                hora = 0;
                es_pm = 0;
            } else if(hora == 12){
                es_pm = 1;
            }
        }
    }

    int mostrar_hora = hora;
    if(mostrar_hora == 0){
        mostrar_hora = 12;
    }else if(mostrar_hora > 12){
        mostrar_hora -= 12;
    }

    printf("La hora siguiente es: %02d:%02d:%02d ", mostrar_hora, minuto, segundo);
    printf("%s\n", es_pm ? "PM" : "AM");
    return 0;

}