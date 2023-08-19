#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The num of paramters passed to the func.
 * @...: A variable num of paramters to cal the sum of.
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int q, sum = 0;

	va_start(ap, n);

	for (q = 0; q < n; q++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
