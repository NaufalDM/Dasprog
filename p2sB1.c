#include<stdio.h>
#include<string.h>
char word[1000000];
int main()
{
	scanf("%1000005[^\r\n]",word);
	int panjang = strlen(word);
	
	int rubah = (word[panjang-1] - ']' + 95) %95; // ditambah 95 agar tidak negatif, lalu di modulo supaya hasilnya tidak lebih dari 95
	
	for(int i = 0; i< panjang; i++)
	{
		word[i] = (word[i] - 32 - rubah + 95) %95 +32; // kurangi dengan 32 untuk tidak memedulikan ascii yang tidak bisa menghasilkan output
		// kemudian baru dikurangi rubah karena karakter di input sudah ditambah rubah dan perlu dikurangi untuk mendapat pesan aslinya
	} 
	
	if(strcmp(word+panjang-15, "[r0selleGustav]") == 0)
	{
		printf("%s\n", word);
	}
	else
	{
		printf("Unidentified Sequence.\n");
	}
}
