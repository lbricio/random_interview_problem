// ----------------------------------------------------------------------------
// Você receberá um número inteiro 'limit' que estará contido entre 0 e 9.
// Imprima na saída padrão todos os números de até 4 dígitos que obedecem 
// as seguintes regras:
// - todos os dígitos devem ser menores que o dígito recebido;
// - a soma dos dígitos deve ser igual a 21;
// - os números devem ser impressos seguidos por (ex: 3666,4566,4656,)
// ----------------------------------------------------------------------------

#include <stdio.h>

#define first_digit  (num/1000)
#define second_digit ((num%1000 - num%100)/100)
#define third_digit  ((num%100 - num%10)/10)
#define fourth_digit (num%10)

int all_digits_are_below_number(int num, int limit)
{
	return ((first_digit <= limit) && (second_digit <= limit) 
		&& (third_digit  <= limit) && (fourth_digit <= limit));
}

int sum_of_all_digits(int num)
{
	return (first_digit + second_digit + third_digit + fourth_digit);
}

void print_numbers(int limit)
{
	int num = 0;
	while (num++ <= 9999)
	{
		if (all_digits_are_below_number(num, limit)
		&& sum_of_all_digits(num) == 21)
		{
			if (first_digit == 0) printf("0"); 
			printf("%i,",num);
		}
	}
}

int main()
{
	int limit;
	scanf("%i",&limit);
	print_numbers(limit);

	return (0);
}
