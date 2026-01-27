#define _CRT_SECURE_NO_WARNINGS // <-- директива для scanf отключающая предупреждения безопасности -->
#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

/*==================== СПЕЦИФИКАТОРЫ ФОРМАТА ============================//
				<-- %d или &i - целые числа со знаком	 (int) -->
				<-- %c - одиночный символ				 (char) -->
				<-- %f - числа с плавающей точкой		 (float) -->
				<-- %lf -								 (double) -->
				<-- %s - для строк						 (string) -->
 =========================================================================
*/

/*============================== ФУНКЦИИ ==============================//
// тип ф-ии _ имя(что принимает) {тело функции, что выполняет}
// void - ничего не возвращают, только выполняют действия в теле функции.
// прототип функции 
=========================================================================
*/
	// === ПРОТОТИПЫ ФУНКЦИЙ ===
void set_localization();
int ploshyad_pryamougolnika(int shirina, int visota);

int main()
{
	set_localization(); // функция локализации.

	// <=== БЛОК ПЕРЕМЕННЫХ ===>
	int a, b;
	int result_ab;

	// <=== БЛОК КОДА ===>
	printf("Введите ширину прямоугольника: ");
	scanf("%d", &a);
	printf("Введите высоту прямоугольника ");
	scanf("%d", &b);

	result_ab = ploshyad_pryamougolnika(a, b);
	printf("Результат: %d", result_ab);

	return 0;
}

// <=== ОПРЕДЕЛЕНИЯ ФУНКЦИЙ ===>
void set_localization()
{
	// <-- Устанпвливаем кодовую страницу консоли в UTF-8 -->
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// <-- Устанавливаем локаль CRT в UTF-8 -->
	setlocale(LC_ALL, ".UTF8");
}
int ploshyad_pryamougolnika(int shirina, int visota)
{
	int result_ploshyad_pryamougolnika = shirina * visota;
	return result_ploshyad_pryamougolnika;
}