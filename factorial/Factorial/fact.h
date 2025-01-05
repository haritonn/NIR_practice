#pragma once
long long fact(long long n)
{
	//Если n < 0, то останавливаем с кодом -1
	if (n < 0)
		return -1;
	//Если на входе 0 или 1 - возвращаем 1
	if (n == 0 | n == 1)
		return 1;
	//Иначе осуществляем рекурсивный вызов
	else
		return n * fact(n - 1);
}