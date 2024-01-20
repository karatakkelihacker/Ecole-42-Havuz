#include <unistd.h>

int	main(int ac, char **av)
{
	// Program parametre almıyor, bu nedenle (void) ile kullanılmayan parametreleri belirtiyoruz
	(void)ac;
	(void)av;
	// "z\n" stringini ekrana yazdır
	write(1, "z\n", 2);
	return (0);
}
