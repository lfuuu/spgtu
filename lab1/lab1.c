#include <stdio.h>
#include <math.h> // Подключение прототипов математических функций

void main()
{
    float volume;         
    int height, radius;         
    
    // Запрос высоты
    printf("1. Введите высоту цилиндра: ");
    scanf(" %d", &height);           
    
    // Запрос радиуса
    printf("2. Введите радиус цилиндра: ");
    scanf(" %d", &radius);           
   
    // Вычисление результата 
    volume = M_PI * pow(radius, 2) * height;        
    printf("3. Объем = %.3f \n", volume);
}
