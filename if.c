#include <stdio.h>

int main(){
	int number;
	printf("adjon meg egy egesz szamot!\n");
	scanf("%d", &number);
	if(number % 2 == 0){
		printf("A szam paros.\n");
	}else{
		printf("A szam paratlan.\n");
	}

	return 0;
}