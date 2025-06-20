#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "vec.h"


void test_vec_resize()
{
	t_vec	t1;
	int		base[] = {1, 2, 3, 4, 5};

	assert(vec_from(&t1, base, 5) > 0);
	assert(vec_resize(&t1, 100) > 0);
	assert(memcmp(t1.memory, base, 5) == 0);
	vec_free(&t1);
	printf("test_vec_resize successful!\n");
}

void test_vec_push()
{
	t_vec	t1;
	int		base[] = {1, 2, 3, 4, 5};
	int		expect[] = {2, 4};

	assert(vec_new(&t1, 1) > 0);
	vec_push(&t1, &base[1]);
	printf("%d\n",t1.memory[0]);
	vec_push(&t1, &base[3]);
	printf("%d\n",t1.memory[0]);
	printf("%d\n",t1.memory[1]);
	assert(memcmp(t1.memory, expect, 2) == 0);
	vec_free(&t1);
	printf("test_vec_push successful!\n");
}

void test_vec_pop()
{
	t_vec	t1;
	int		base[] = {1, 2, 3, 4, 5};
	int		expect = 0;

	assert(vec_new(&t1, 1) > 0);
	vec_push(&t1, &base[1]);
	vec_push(&t1, &base[3]);
	vec_pop(&expect, &t1);
	assert(expect == 4);
	vec_pop(&expect, &t1);
	assert(expect == 2);
	assert(t1.len == 0);
	vec_free(&t1);
	printf("test_vec_pop successful!\n");
}
void test_vec_get()
{
	t_vec	t1;
	int		base[] = {1, 2, 3, 4, 5};
	int		*expect;

	assert(vec_new(&t1, 1) > 0);
	vec_push(&t1, &base[1]);
	vec_push(&t1, &base[3]);
	expect = vec_get(&t1, 0);
	assert(*expect == 2);
	expect = vec_get(&t1, 1);
	assert(*expect == 4);
	assert(t1.len == 2);
	assert(vec_get(&t1, 2) == NULL);
	vec_free(&t1);
	printf("test_vec_get successful!\n");
}
void test_vec_insert()
{
	t_vec	t1;
	int		base[] = {1, 2, 3, 4, 5};
	int		insert[] = {42, 666, 7};
	int		expect[] = {1, 42, 2, 3, 666, 4, 5, 7};

	assert(vec_from(&t1, base, 5) > 0);
	vec_insert(&t1, &insert[0], 1);
	vec_insert(&t1, &insert[1], 4); 
	vec_insert(&t1, &insert[2], 7);
	assert(memcmp(t1.memory, expect, sizeof(expect)) == 0);
	vec_free(&t1);
	printf("test_vec_insert successful!\n");
}
void test_vec_remove()
{
	t_vec	t1;
	int		base[] = {1, 2, 3, 4, 5};
	int		insert[] = {42, 666, 7};

	assert(vec_from(&t1, base, 5) > 0);
	vec_insert(&t1, &insert[0], 1);
	vec_insert(&t1, &insert[1], 4);
	vec_insert(&t1, &insert[2], 7);
	vec_remove(&t1, 1);
	vec_remove(&t1, 3);
	vec_remove(&t1, 5);
	assert(memcmp(t1.memory, base, sizeof(base)) == 0);
	vec_free(&t1);
	printf("test_vec_remove successful!\n");
}

void test_vec_append()
{
	t_vec	t1;
	t_vec	t2;
	int		base1[] = {1, 2, 3};
	int		base2[] = {4, 5, 6};
	int		expect[] = {1, 2, 3, 4, 5, 6};

	assert(vec_from(&t1, base1, 3) > 0);
	assert(vec_from(&t2, base2, 3) > 0);
	assert(vec_append(&t1, &t2) > 0);
	assert(memcmp(t1.memory, expect, sizeof(expect)) == 0);
	vec_free(&t1);
	vec_free(&t2);
	printf("test_vec_append successful!\n");
}
void test_vec_prepend()
{
	t_vec	t1;
	t_vec	t2;
	int		base1[] = {1, 2, 3};
	int		base2[] = {4, 5, 6};
	int		expect[] = {4, 5, 6, 1, 2, 3};

	assert(vec_from(&t1, base1, 3) > 0);
	assert(vec_from(&t2, base2, 3) > 0);
	assert(vec_prepend(&t1, &t2) > 0);
	for (size_t i = 0; i < t1.len; i++)
	{
		printf("%d ", t1.memory[i]);
	}
	
	assert(memcmp(t1.memory, expect, sizeof(expect)) == 0);
	vec_free(&t1);
	vec_free(&t2);
	printf("test_vec_prepend successful!\n");
}

int	main(void)
{
	t_vec t1;
	t_vec t2;
	int     base[] = {1, 2, 3, 4, 5};
	//const int	*src = "src";
	int	dst[5];

	printf("==============================FT_MEMCPY==============================\n");
	ft_intmemcpy(dst, base, 5);
	for (int i = 0; i < 5; i++)
		printf("%d-",dst[i]);
	printf("\n");
	for (int j = 0; j < 5; j++)
		printf("%d-",base[j]);
	printf("test_ft_intmemcpy success!\n");
	printf("==============================ft_MEMMOVE==============================\n");
	//printf("%s", ft_intmemmove(dst, src, 3));
	printf("test_ft_intmemmove success!\n");
	printf("==============================VEC_NEW==============================\n");
	assert(vec_new(&t1, 0) > 0);
	assert(t1.memory == NULL);
	assert(vec_new(&t1, 10) > 0);
	assert(t1.memory != NULL);
	free(t1.memory);
	printf("test_vc_new success!\n");
	printf("==============================VEC_FREE==============================\n");
	assert(vec_new(&t1, 10) > 0);
	vec_free(&t1);
	assert(t1.len  == 0);
	assert(t1.capacity == 0);
	assert(t1.memory == NULL);
	printf("test vec_free success!\n");
	printf("==============================VEC_FROM==============================\n");
    assert(vec_from(&t1, base, 5) > 0);
	for (size_t i = 0; i < 5; i++)
	printf("%d-", t1.memory[i]);
	for (size_t j = 0; j < 5; j++)
	printf("%d-",base[j]);
	printf("\n");
    assert(memcmp(t1.memory, base, 5) == 0);
    vec_free(&t1);
    printf("test_vec_from successful!\n");
	printf("==============================VEC_COPY==============================\n");
	assert(vec_from(&t1, base, 5) > 0);
	for (size_t i = 0; i < 5; i++)
	printf("%d-",t1.memory[i]);
	printf("\n");
    assert(vec_new(&t2, 5) > 0);
	// for (size_t i = 0; i < 5; i++)
	// 	printf("%d-",t2.memory[i]);
	printf("\n");
    assert(vec_copy(&t2, &t1) > 0);
	for (size_t i = 0; i < 5; i++)
		printf("%d-",t2.memory[i]);
	printf("\n");
	for (size_t i = 0; i < 5; i++)
		printf("%d-",t2.memory[i]);
	printf("\n");
    assert(memcmp(t2.memory, base, 5) == 0);
    vec_free(&t1);
    vec_free(&t2);
    printf("test_vec_copy successful!\n");
	printf("==============================VEC_RESIZE==============================\n");
	test_vec_resize();
	printf("==============================VEC_PUSH==============================\n");
	test_vec_push();
	printf("==============================VEC_POP==============================\n");
	test_vec_pop();
	printf("==============================VEC_GET==============================\n");
	test_vec_get();
	printf("==============================VEC_INSERT==============================\n");
	test_vec_insert();
	printf("==============================VEC_REMOVE==============================\n");
	test_vec_remove();
	printf("==============================VEC_APPEND==============================\n");
	test_vec_append();
	printf("==============================VEC_PREPEND==============================\n");
	test_vec_prepend();
}

