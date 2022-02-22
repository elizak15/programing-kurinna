/**
 * @file lib.c
 * @brief Файл з реалізацією функції із завданням визначити чи є число простим.
 * 
 * @author Kurinna E.
 * @date 22-dec-2022
 * version 1.2
 */

#include "lib.h"
int truefalse_for1(int n, int i)
{
	if (n > 1) {
		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				n = 0;
			}
		} // 2 => false //
		for (i = 2; i < n; i++) {
			if (n % i != 0) {
				n = 1;
			}
		} // 1 => true //
	}
	return n;
}
