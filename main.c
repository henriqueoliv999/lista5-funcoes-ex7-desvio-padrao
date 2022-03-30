#include <stdio.h>
#include <math.h>

double desvioPadrao(double v[], int tam);

int main(void) {
	int tam;
	printf("Tamanho do vetor: ");
	scanf("%d", &tam);
  double v[tam];
	int i;
	for(i=0;i<tam;i++){
		printf("Elemento %d: ", i+1);
		scanf("%lf", &v[i]);
	}
	printf("Desvio padrão é: %.2lf", desvioPadrao(v, tam));
}

double desvioPadrao(double v[], int tam){
	double somat1 = 0;
	double somat2 = 0;
	double somat3;
	int i;
	int j;
	for(i=0;i<tam;i++){
		somat1 += v[i];
	}
	somat1 *= somat1;
	somat1 = somat1/-tam;
	for(j=0;j<tam;j++){
		somat2 += (v[j]*v[j]);
	}
	somat3 = somat2 + somat1;
	somat3 = somat3/(tam-1);
	return sqrt(somat3);
}