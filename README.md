[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=19522536&assignment_repo_type=AssignmentRepo)
# Proyecto - 2da entrega

## Integrantes

[Diego Alexander Villabona Serna](https://github.com/alexovs71)

[Cristian Eduardo Huertas Moreno](https://github.com/Kristianx00)
## Introduccion 
Finalmente, el proyecto se centra en el diseño e integración del sistema automatico de enfriamiento, pues este nos permite a su vez visualizar en tiempo real la temperatura ambiente o un componente especifico; esta configurado para activar un ventilador cuando la temperatura exceda un limite máximo que se establecio previamente y lo apaga automáticamente cuando la temperatura caer por debajo del tope definido.El objetivo principal es mantener condiciones térmicas optimas para el correcto funcionamiento de diferentes dispositivos, evitando los sobrecalentamientos y fallas posteriores. 
Este tipo de sistema son ampliamente utilizados en diversos campos, como por ejemplo la refrigeración de sistema electrónicos, control ambiental de invernaderos, control térmico de motores de combustión, etc.
## Documentación
## Objetivo

Diseñar un sistema de monitoreo de temperatura, capaz de detectar la temperatura ambiental. Los datos serán visualizados en una pantalla LCD, y el sistema activará automáticamente un ventilador cuando tengamos una temperatura alta definida anteriormente.

Se usarán potenciómetros o boton para determinar el punto en que se encenderá el ventilador para la adecuada refrigeración.

## Objetivos Especificos 

-Leer la temperatura ambiente con el sensor DHT11.

-Mostrar la temperatura actual en una pantalla LCD 16x2.

-Activar un electroventilador automáticamente al superar cierta temperatura.

-Permitir la calibración manual del rango de activación mediante un potenciómetro.

-Implementar un sistema eficiente e intuitivo para visualizar adecuadamente el cambio de temperatura. (Visualizar por medio de LEDS cuando se supere el limite de temperatura previamente puesto)
## Materiales

-Potenciometro: En este caso al ser una resistencia variable, sera el encargado de definir el tope de temperatura de comparacion. De esta manera se selecciona a que temperatura se quiere prender el ventilador.

-Rele de 12V:

-LM358p: Este servira como un comparador de voltaje por ende, compara la salida del sensor de temperatura con el valor definido en el potenciometro. Entonces si la temperatura es superior del tope establecido, este comparador nos entregara una salida alta que va directo al transistor.

-Diodo zener: Se usa para proteger de voltajes inversos que puede producir el rele cuando se nos apague.

-Pickit 4:Sera utilizado para cargar los datos y trabajar de la mano con la LCD.

-Pantalla LCD 16x2: Sera usada para visualizar la temperatura actual. Se conecta al pickit.

-Electroventilador: Disipa el calor luego de ser activado.

-Resistencias: Usadas para proteger componentes de exceso de corriente.

-Sensor LM35: Su funcion es la de medir la temperatura ambiente o un componente en especifico, conectado al comparador para que se active el sistema.

-Transistor 2n2222: Se usara como interruptor, esto para que nos active el rele.
## Funcionanmiento del sistema 
-El lm35 se encarga de leer la temperatura.

-Su valor de salida se compara con el valor que tenemos en el potenciometro, esto en el LM358.

-Si la temperatura super el limite pues por el potenciometro, se activara nuestro transistor.

-El transistor energiza el rele que activara el electroventilador.

-La pantalla LCD Muestra la temperatura.

-El sistema sera controlado y monitoreado por medio del pickit 4.

## Diagramas
DIAGRAMA DE FLUJO
![Diagrama de flujo](/Diagrama_de_Flujo.png)

DIAGRAMA ESQUETICO 

![Diagrama_Esquematico](/Diagrama_Esquematico.jpg)

PROYECTO
![Proyecto](/Proyecto.png)
## Codigos

![Codigo adc.c](/src/adc.c)
![Codigo adc.h](/src/adc.h)
![Codigo i2c.c](/src/i2c.c)
![Codigo l2c.c](/src/i2c.h)
![Codigo l2c.c](/src/i2c_lcd.h)
![Codigo l2c.c](/src/i2c_lcd.c)
![main.c](/src/main.c)
## Conclusiones
En conclusión se desarrolló un sistema automático de enfriamiento que nos permite controlar la activación de un ventilador mediante la función de temperatura medida en tiempo real, la cual se logra visualizar. Su diseño es utilizado con base en componentes electrónicos sencillos, demostrando la eficiencia y bajo costo para mantener una temperatura. Este tipo de sistema, como se mencionó anteriormente, es aplicable en diferentes áreas y puede fácilmente mejorarse según la necesidad de la persona.