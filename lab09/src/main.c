/** @mainpage
 * # Загальне завдання
 * **Сформувати** функцію, що визначає чи є число простим
 *
 *
 * @author Kurinna E.
 * @date 22-feb-2022
 * @version 2.2
 */

/** 
 * @file main.c
 * @brief Файл з демонстрацією роботи структури {@truefalse_for1}
 *
 * @author Kurinna E.
 * @date 22-feb-2022
 * @version 1.1
 */

#include "lib.h"

/**
 * Головна функція 
 *
 * Послідовність дій:
 *  - в перемінну n виводиться значення, яке передається з функції {@truefalse_for1}
 *  @return успішний код повернення з програми (0)
 */

int main()
{
	int n = 7;
	int i = 2;
	n = truefalse_for1(n, i);
	return 0;
}
