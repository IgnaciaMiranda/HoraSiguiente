# Calculadora de Hora Siguiente

## Descripción
Este programa en C calcula y muestra la hora un segundo después de la hora ingresada por el usuario. Convierte automáticamente entre el formato de 24 horas y el formato de 12 horas con indicador AM/PM.

## Características
- Acepta entrada de hora en formato `hh:mm:ss`
- Incrementa la hora en un segundo
- Maneja correctamente el cambio de minutos y horas
- Convierte del formato de 24 horas al formato de 12 horas
- Muestra correctamente los indicadores AM/PM

## Cómo compilar
Para compilar el programa, utiliza el compilador GCC:
```
gcc -o hora_siguiente hora_siguiente.c
```

## Cómo usar
1. Ejecuta el programa compilado
2. Ingresa la hora en formato `hh:mm:ss` (por ejemplo, 16:52:02)
3. El programa mostrará la hora un segundo después, en formato de 12 horas con indicador AM/PM

## Ejemplos
- Entrada: `16:52:02` → Salida: `04:52:03 PM`
- Entrada: `23:59:59` → Salida: `12:00:00 AM` (cambio de día)
- Entrada: `11:59:59` → Salida: `12:00:00 PM` (cambio de AM a PM)

## Limitaciones
- El programa asume que la entrada está en formato de 24 horas
- No valida que los valores de entrada sean correctos (por ejemplo, no verifica que las horas estén entre 0-23 y los minutos/segundos entre 0-59)

## Posibles mejoras futuras
- Validación de entrada
- Opción para elegir entre formatos de 12 y 24 horas para la salida
- Soporte para zonas horarias
