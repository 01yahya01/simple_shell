/*
 * File: mem_2.c
 * Auth: Yahya Laamari
 *       Salma Bensaikouk
 */

#include "root.h"

/**
 * _free - frees pointer and NULLs the address
 * @p: address of pointer to free
 * Return: 1 if freed, otherwise 0
 */
int _free(void **p)
{
	if (p && *p)
	{
		free(*p);
		*p = NULL;
		return (1);
	}
	return (0);
}
