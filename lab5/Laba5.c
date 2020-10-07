#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

char *years(int age)
{
	if (((age == 1) || (age % 10 == 1)) && (age != 11)) //Задаём числа  1, 21, 31, 41...
		return "год";
	else
	{
		if (((age % 10 == 2) || (age % 10 == 3) || (age % 10 == 4)) && ((age != 12) && (age != 13) && (age != 14))) //12, 13, 22, 23, 24, 32, 33, 34...
			return "года";
		else
			return "лет";
	}
}

int check_age(int age) //Проверка на совершеннолетие
{
	int stat = 0;
	if (age >= 60) //Возраст >= 60 то совершеннолетний+пенсионер(возвращает 11)
		stat = 11;
	else if (age >= 18) //Возраст >= 18 то только совершеннолетний(вовзрат10)
		stat = 10;
	return stat; //Если меньше, то возвращаем ноль
}

void solve_age_params(int stat, int age)
{
	int sov, pens;
	switch (stat)
	{
	case 11:
		sov = age - 18;
		pens = age - 60;
		if (age != 60)
			printf("Ваш возраст %d %s.\nВы совершеннолетний %d %s.\nВы пенсионер %d %s.\n", age, years(age), sov, years(sov), pens, years(pens));
		else
			printf("Ваш возраст 60 лет.\nВы совершеннолетний 42 года.\nВы пенсионер.\n");
		break;
	case 10:
		pens = 60 - age;
		sov = age - 18;
		if (age != 18)
			printf("Ваш возраст %d %s.\nВы совершеннолетний %d %s.\nВам до пенсии %d %s.\n", age, years(age), sov, years(sov), pens, years(pens));
		else
			printf("Ваш возраст 18 лет.\nВы совершеннолетний.\nВам до пенсии 42 года.\n");
		break;
	default:
		pens = 60 - age;
		sov = 18 - age;
		printf("Ваш возраст %d %s.\nВам до совершеннолетия %d %s.\nВам до пенсии %d %s.\n", age, years(age), sov, years(sov), pens, years(pens));
		break;
	}
}
int input_age()
{
	int age;
	printf("Введите ваш возраст:\n");
	while (scanf("%d", &age) != 1)
	{
		while (getchar() != '\n')
		{
		}
		printf("Ошибка. Повторите ввод.\n");
	}
	if ((age < 0) || (age > 100))
	{
		printf("Возраст должен принадлежать диапазону от 0 до 100.\n");
		exit(0);
	}
	else
		return age;
}
void main(void)
{
	setlocale(LC_ALL, "");  // Правильный вывод под русский регион
	int age, stat;
	age = input_age();
	stat = check_age(age);
	solve_age_params(stat, age);
}
