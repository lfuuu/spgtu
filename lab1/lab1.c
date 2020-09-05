#include <stdio.h>
#include <math.h> // Подключение прототипов математических функций

void main()
{
    float volume;         
    int height, radius;         
    
    // Запрос высоты
    printf("Введите высоту цилиндра: ");
    scanf(" %d", &height);           
    
    // Запрос радиуса
    printf("Введите радиус цилиндра: ");
    scanf(" %d", &radius);           
   
    // Вычисление результата 
    volume = M_PI * pow(radius, 2) * height;        
    printf("Объем = %.3f \n", volume);
}
