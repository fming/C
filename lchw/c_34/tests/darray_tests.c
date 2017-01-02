#include "minunit.h"
#include "../src/darray.h"


static DArray *array = NULL;
static int *val1 = NULL;
static int *val2 = NULL;

char *test_create()
{
    array = DArray_create(sizeof(int), 100);
    mu_assert(array != NULL, "DArray_create failed.");
    mu_assert(array->contents != NULL, "contents are wrong in darray");
    
    mu_assert(array->end == 0, "end isn't at the right spot");
    mu_assert(array->element_size == sizeof(int), "element size is wrong.");
    
    mu_assert(array->max == 100, "wrong max length on initial size");
    
    return NULL;
}


char *test_destroy()
{
    DArray_destroy(array);
    return NULL;
}

char *test_new()
{
    val1 = DArray_new(array);
    mu_assert(val1 != NULL, "failed to make a new element");
    
    val2 = DArray_new(array);
    mu_assert(val2 != NULL, "failed to make a new element");
    
    return NULL;
}

char *all_tests() {
    mu_suite_start();
    
    mu_run_test(test_create);
    mu_run_test(test_new);
    mu_run_test(test_destroy);
}

RUN_TESTS(all_tests);
