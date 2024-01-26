void	ft_putchar(char c);
void	ft_puterror(void);

//int width: Satırın genişliğini temsil eder.
//char left: Satırın en solundaki karakteri temsil eder.
//char middle: Satırın ortasındaki karakteri tekrar etmek için kullanılır.
//char right: Satırın en sağındaki karakteri temsil eder.

//ft_putchar(left);: En sol karakteri yazdırır.
//while (i < width - 2) { ft_putchar(middle); i++; }:
//Orta karakteri (width - 2) kez yazdırır. 
//-2, çünkü en sol ve en sağ karakterler zaten yazdırılmıştır.
//if (width > 1) ft_putchar(right);: Genişlik 1'den büyükse en sağ karakteri yazdırır.
//ft_putchar('\n');: Bir sonraki satıra geçer.

void	draw_line(int width, char left, char middle, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	while (i < width - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

//void	rush(int x, int y) 
//Bu fonksiyon, belirtilen genişlik x ve yükseklik y'e dayalı olarak bir desen 
//çizme işlevini yerine getirir. draw_line fonksiyonunu kullanır.
//int x: Desenin genişliğini temsil eder.
//int y: Desenin yüksekliğini temsil eder.
//rush fonksiyonunun adım adım açıklaması şu şekildedir:
//if (x <= 0 || y <= 0) return;: Giriş genişliği x veya yüksekliği y'nin 0'dan küçük veya eşit olup olmadığını kontrol eder. 
//Doğru ise, fonksiyon erken döner.
//draw_line(x, 'o', '-', 'o');: Desenin üst satırını 'o', '-', 'o' karakterleri ile çizer.
//i = 2; while (i < y) { draw_line(x, '|', ' ', '|'); i++; }: Desenin orta kısmını '|', ' ', '|' karakterleri ile çizer. 
//Bu döngü 2'den y - 1'e kadar çalışır.
//if (y > 1) draw_line(x, 'o', '-', 'o');: y 1'den büyükse desenin alt satırını 'o', '-', 'o' karakterleri ile çizer.
//draw_line fonksiyonu, farklı karakterlerle satırlar çizmek için kullanılan yeniden kullanılabilir bir bileşendir. 
//Bu fonksiyonlar bir araya gelerek belirtilen parametrelere dayalı olarak ekranda bir desen oluşturur.

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		ft_puterror();
		return ;
	}
	draw_line(x, 'o', '-', 'o');
	i = 2;
	while (i < y)
	{
		draw_line(x, '|', ' ', '|');
		i++;
	}
	if (y > 1)
		draw_line(x, 'o', '-', 'o');
}