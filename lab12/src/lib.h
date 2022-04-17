#ifndef __LIB1_H__
#define __LIB1_H__
/**
 * @file lib.h
 * @brief Файл з функціями із завданням знайти найбільше і найменьше слово
 * @author Kurinna E.
 * @date 17-apr-2022
 * @version 1.3
 **/

/** Визначення добутку двох матриць
 *  @param array1 вхідний масив
 *  @param array2 вхідний масив
 *  @param array3 результуючий масив
 *  @param rows1 рядок першої матриці
 *  @param rows2 рядок другої матриці
 *  @param columns2 стовбець другої матриці
 *  return повертає значення array3.
 **/
#include <string.h>
#include <stdlib.h>
size_t function_find(char *string, const  char *large,const char *small, char **words);
#endif
