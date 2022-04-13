#ifndef __LIB1_H__
#define __LIB1_H__
/**
 * @file lib.h
 * @brief Файл з функцією із завданням визначити добуток двох матриць
 * @author Kurinna E.
 * @date 11-apr-2022
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
int multy_matrix(int **array1, int **array2, int **array3, int rows1, int rows2, int columns2);

#endif
