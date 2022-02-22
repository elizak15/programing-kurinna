/**
 * @file test.c
 * @brief Файл з ттестами на реалызації функцій оперування тваринами
 *
 * @author Kurinna E.
 * @date 22-feb-2022
 * @version 1.4
 */

#include "/home/eliza/programing-kurinna/lab09/src/lib.h"
#include <check.h>
#include <stdlib.h>

/**
 * Верифікація роботи функції {@link truefalse_for1}.
 *
 * У зв'язку з тим, що функція {@link truefalse_for1} визначає чи є число простим, її верифікація полягає в перевірці чи дісно число є простим.
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина тестів не пройшла.
 */

START_TEST(test_truefalse_for1)

{
	int data_a = 7;
	int data_b = 2;
	int expected = 1;
	int actual = truefalse_for1(data_a, data_b);
	ck_assert_int_eq(actual, expected);
}
END_TEST

/**
 * Точка входу модуля тестування.
 * 
 * Запускає роздроблені функції верифікації функцій роботи з структурой {@link truefalse_for1).
 *
 * При завершенню тестів виводиться на екран резуміюча інформація про стан проходження тестів.
 *
 * @return  стан проходження тестів: 1 - тести пройшла успішно, 0 - частина тестів не пройшла
 */
int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("Lab-??");

	tcase_add_test(tc_core, test_truefalse_for1);
	suite_add_tcase(s, tc_core);

	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? 1 & 0 : CK_FAILURE;
}
