#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

//autor: Elcio Augusto Dalosto, para uso nos exercícios de média ponderada do curso Pixar In A Box da Khan Academy.

int mediaPonderada(){
		
	float a=0, Ax=0, Ay=0, b=0, Bx=0, By=0, c=0, Cx=0, Cy=0, M=0, Mx=0, My=0;
	int quit=0;
		while (quit == 0)
		{
			printf("PESOS:");
			printf("\nDigite o peso de A: ");
			scanf("%f", &a);
			printf("\nDigite o peso de B: ");
			scanf("%f", &b);
			printf("\nDigite o peso de C: ");
			scanf("%f", &c);	
		
			M=(a+b+c);
			printf("M = %.0f\n\n", M);
			
			printf("PONTOS:");
			printf("\nDigite o X de A: ");
			scanf("%f", &Ax);
			printf("\nDigite o X de B: ");
			scanf("%f", &Bx);
			printf("\nDigite o X de C: ");
			scanf("%f", &Cx);
			
			printf(">>> Mx=(a*Ax)+(b*Bx)+(c*Cx))/%.0f \t(%.0f*%.0f)+(%.0f*%.0f)+(%.0f*%.0f)/%.0f\n", M,a,Ax,b,Bx,c,Cx,M);
			Mx=(a*Ax);	
			printf(">>> a*Ax \t%.0f*%.0f=%.0f\n", a, Ax, Mx);
			Mx=(b*Bx);
			printf(">>> b*Bx \t%.0f*%.0f=%.0f\n", b, Bx, Mx);
			Mx=(c*Cx);
			printf(">>> c*Cx \t%.0f*%.0f=%.0f\n", c, Cx, Mx);
			Mx=((a*Ax)+(b*Bx)+(c*Cx));
			printf("Mx = %.0f/%.0f\n", Mx, M);
			Mx=((a*Ax)+(b*Bx)+(c*Cx))/M;
			printf("Mx = %.3f\n", Mx);
			//	My=((a*Ay)+(b*By)+(c*Cy))/M;
			//	printf("My = %.3f\n", My);
			printf("\nDeseja continuar calculando Medias Ponderadas?\n");
			printf(".0 para CONTINUAR calculando\n.1 para SAIR do sistema.\n\n");
			scanf("%d", &quit);
		} 
}

int main(){

	printf("PROGRAMA MEDIA PONDERADA\n\n");
	mediaPonderada();
	printf("SAINDO DO SISTEMA... PRESSIONE ENTER\n\n");
	system("pause");
	

}
