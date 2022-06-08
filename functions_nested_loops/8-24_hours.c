#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute, starting from 00:00 to 23:59
 *
 * Return: aaa
 */
void jack_bauer(void)
{
	int PEPE_H, PEPE_M;

	for (PEPE_H = 0; PEPE_H < 24; PEPE_H++)
	{
		for (PEPE_M = 0; PEPE_M < 60; PEPE_M++)
		{
			_putchar(PEPE_H + '0');
			_putchar(':');
			_putchar(PEPE_M + '0');
		}
	}
}
