/**
 * @file test.c
 * @brief Файл з тестами на реалізації функції знаходження найдовшого і найкоротшого слова, та різниці наскільки символів найдовше слово більше.
 * @author Kurinna E.
 * @date 17-apr-2022
 * @version 1.4
 **/
#include "/home/eliza/programing-kurinna/lab12/src/lib.h"
#include <check.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>
#include <string.h>

/**
 * Верифікація роботи функції {@link function_find}.
 * У зв'язку з тим, що функція {@link function_find} визначає найкоротше і найдовше слово, її верифікація полягає в знаходженні їх за допомогою функцій бібліотеки (string.h) та знаходження на скільки символів слово довше за найкоротше
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина тестів не пройшла.
 *       */

START_TEST(test_function_find)
{
	char *data_a = (char *)malloc(100 * sizeof(char ));
	data_a = "She is doing laboratory";
	char *small = (char*)malloc(100 * sizeof(char));
	char *large = (char*)malloc(100 * sizeof(char));

	char **words = (char **)malloc(100 * sizeof(char*));
	for (int i = 0; i < 100; i++) {
		*(words + i) = (char *)malloc(100 * sizeof(char));
	}

	
	int expected = 8;
	int actual =function_find(data_a, large, small,  words);
	ck_assert_int_eq(expected, actual);
		
	
}
END_TEST

/**
 * Точка входу модуля тестування.
 * 
 * Запускає роздроблені функції верифікації функцій роботи з структурой {@link function_find).
 * 
 *  При завершенню тестів виводиться на екран резуміюча інформація про стан проходження тестів.
 *   
 * @return  стан проходження тестів: 1 - тести пройшла успішно, 0 - частина тестів не пройшла
 **/
int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("lab12");

	tcase_add_test(tc_core, test_function_find);
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? 1 & 0 : CK_FAILURE;
}
