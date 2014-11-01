#include <stdio.h>
#include <stdlib.h>
int main()
{
int sayilar[] = {44,58,75,64,12,34,25,10,8,20};
int i,j; // i ve j for loobunda kullanmak için || i and j are declared to use in for loop
int elemanSayisi = sizeof(sayilar)/sizeof(sayilar[0]);
// elemanSayisi degiskenine sizeof() fonksiyonu ile sayilar[] dizisinin icerisindeki elemanlarin sayisini aliyorum.
// I am getting that how many elements are there in sayilar[] array, using sizeof() function.
for (i = 0; i < elemanSayisi; i++)
	{
printf("%d ", sayilar[i]);
	}
for(i = 0; i < elemanSayisi; i++)
	{
for(j = i+1; j < elemanSayisi; j++)
	{
if(sayilar[j] < sayilar[i])
	{
int tutucu = 0; // tutucu degiskenini dizideki sirasiyla buyuk sayiyi tutmak icin olusturdum.|| tutucu variable will hold the biggest number in array
tutucu = sayilar[i]; //ilk en buyuk sayiyi tututucuya atadik || now we assign the the big number to tutucu.
sayilar[i] = sayilar[j]; //burada kucuk sayiyi buyuk sayinin oldugu yere aliyoruz ||here it assign small number to sayilar[i] sayilar[j] = tutucu; //ve en son tutucu sayilar[j] ye atiyoruz.|| and it assign the tutucu to sayilar[j] }
}
}
printf("\n");
for (i = 0; i < elemanSayisi; i++)
{
printf("%d ", sayilar[i]);
}
}
}
