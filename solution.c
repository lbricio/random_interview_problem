// ----------------------------------------------------------------------------
// Você receberá um número inteiro 'limit' que estará contido entre 0 e 9.
// Imprima na saída padrão todos os números de até 4 dígitos que obedecem 
// as seguintes regras:
// - todos os dígitos devem ser menores que o dígito recebido;
// - a soma dos dígitos deve ser igual a 21;
// - os números devem ser impressos seguidos por (ex: 3666,4566,4656,)
// ----------------------------------------------------------------------------

#include <stdio.h>

#define first_digit  (i/1000)
#define second_digit ((i%1000 - i%100)/100)
#define third_digit  ((i%100 - i%10)/10)
#define fourth_digit (i%10)

void print_numbers(int number)
{
	int i = 0;
	while (i++ <= 9999)
	{
		if ((first_digit <= number) 
		&& (second_digit <= number) 
		&& (third_digit  <= number)
		&& (fourth_digit <= number))
			if ((first_digit + second_digit + third_digit + fourth_digit) == 21)
			{
				if (first_digit == 0) printf("0"); 
				printf("%i,",i);
			}
	}
}

int main()
{
	int number;
	scanf("%i",&number);
	print_numbers(number);

	return (0);
}
