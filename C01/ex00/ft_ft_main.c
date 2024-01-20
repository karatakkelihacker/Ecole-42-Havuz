#include <stdio.h>

void ft_ft(int *nbr) 
{
    // Parametre olarak gelen işaretçi aracılığıyla değeri 42 yap
    *nbr = 42;
}

int main() 
{
    int number;
    // Fonksiyonu çağırarak number'ın değerini 42 yap
    ft_ft(&number);

    // Test sonrasında number'ın değeri
    printf("%d\n", number);

    return 0;
}