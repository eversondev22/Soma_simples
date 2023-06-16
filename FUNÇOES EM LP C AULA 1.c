#include<stdio.h>
int main(){
	int idade1 = 0;
	int idade2 = 0;
	int idade3 = 0;
	int resultado = 0;
	
	printf("\n Digite a primeira idade:");
	scanf("%d", &idade1);
	printf("\n Digite a segunda idade:");
	scanf("%d", &idade2);
	printf("\n Digite a idade a terceira idade:");
	scanf("%d", &idade3);
	resultado= (idade1 + idade2 + idade3) / 3;
	printf("\n Resultado = %d", resultado);
	return 0;
}
