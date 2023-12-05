#include <stdio.h>

int ciftMi(int num){
	if (num % 2 == 0)
		return 1;
	else
		return 0;
}

int main(){
	
	int number;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &number);
	
	if (ciftMi(number))
		printf("Sayi cifttir.\n");
	else
		printf("Sayi tektir.\n");
	
	return 0;
}
