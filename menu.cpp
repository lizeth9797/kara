#include<cstdio>
#include<cstdlib>
#include<ctime>
main()
{
	system("color 3B");
	time_t inicio,fin;
    inicio=time(NULL);
    printf("\n HORA DE ENTRADA: %s ",asctime(localtime(&inicio)));
    int o,resp,tri;
    float area,perimetro,a,b,c,d;
    do
    {
    	system("cls");
		printf("\n MENU DE Areas Y Perimetros [A/P]\n");
    	printf("\n 1) [A/P] RECTANGULO");
    	printf("\n 2) [A/P] TRIANGULO");
    	printf("\n 3) [A/P] CUADRADO");
    	printf("\n 4) [A/P] CIRCULO");
    	printf("\n 5) [A/P] PENTAGONO");
    	printf("\n 6) [A/P] HEXAGONO");
    	printf("\n 7) [A/P] TRAPECIO");
    	printf("\n ELIJA UNA OPCION:   ");
    	scanf("%i",&o);
    	switch(o)
    	{
    		case 1:
    			system("cls");
    			printf("\nRECTANGULO");
    			printf("\nBase:   ");
    			scanf("%f",&b);
    			printf("Altura:  ");
    			scanf("%f",&a);
    			perimetro=(2*a)+(2*b);
    			area=b*a;
    			printf("\n PERIMETRO= %.2f",perimetro);
    			printf("\n AREA= %.2f",area);
    			break;
    		case 2:
    			system("cls");
    			printf("\nTRIANGULO");
    			printf("\nBase:   ");
    			scanf("%f",&b);
    			printf("\nAltura:  ");
    			scanf("%f",&a);
    			area=(b*a)/2;
    			printf("\n AREA= %.2f",area);
    			printf("\nEscoje el tipo de TRIANGULO\n");
                printf("Equilatero=1, Isosceles=2, Escaleno=3\n");
                scanf("%i",&tri);
                          if (tri==1)        //T.EQUILATERO
                          {
                                     printf("\nValor de uno de sus LADOS:  ");
                                     scanf("%f",&a);
                                     perimetro=(3*a);
                                     printf("\nPERIMETRO= %.2f\n",perimetro);
                          }else if (tri==2)  //T.ISOSCELES
                          {
                                     printf("\nValor de uno de sus LADOS:  ");
                                     scanf("%f",&a);
                                     printf("\nBASE: ");
                                     scanf("%f", &b);
                                     perimetro=((2*a)+b);
                                     printf("\nPERIMETRO= %.2f\n",perimetro);
                          }else if (tri==3)    //T.ESCALENO
                          {
                                     printf("Inserta el valor de cada LADO\n");
                                     scanf("%f %f %f",&a, &b, &c);
                                     perimetro=(a+b+c);
                                     printf("\nPERIMETRO= %.2f\n",perimetro);
						  }
				break;
			case 3:
				system("cls");
				printf("\nCUADRADO");
				printf("\nValor de un LADO:   ");
    			scanf("%f",&a);
    			perimetro=4*a;
    			area=a*a;
    			printf("\n PERIMETRO= %.2f",perimetro);
    			printf("\n AREA= %.2f",area);
    			break;
    		case 4:
    			system("cls");
				printf("\nCIRCULO");
				printf("\nRADIO:");
				scanf("%f",&a);
				area=3.1416*(a*a);
				perimetro=2*(3.1416)*a;
				printf("\n PERIMETRO= %.2f",perimetro);
    			printf("\n AREA= %.2f",area);
    			break;
			case 5:
				system("cls");
				printf("\nPENTAGONO");
				printf("\nValor de uno de sus LADOS:");
				scanf("%f",&a);
				printf("\nAPOTEMA:  ");
				scanf("%f",&b);
				perimetro=5*a;
				area=(perimetro*b)/2;
				printf("\n PERIMETRO= %.2f",perimetro);
    			printf("\n AREA= %.2f",area);
    			break;
			case 6:
				system("cls");
				printf("\nHEXAGONO");
				printf("\nValor de uno de sus LADOS:  ");
				scanf("%f",&a);
				printf("\nAPOTEMA:  ");
				scanf("%f",&b);
				perimetro=6*a;
				area=(perimetro*b)/2;
				printf("\n PERIMETRO= %.2f",perimetro);
    			printf("\n AREA= %.2f",area);
    			break;
			case 7:
			system("cls");
			printf("\nTRAPECIO");
			printf("\nValor de cada uno de sus lados:\n");
			scanf("%f %f %f %f",&a,&b,&c,&d);
			perimetro=a+b+c+d;
			printf("\nBASE MAYOR:  ");
			scanf("%f",&a);
			printf("\nBASE MENOR:  ");
			scanf("%f",&b);
			printf("\nALTURA:  ");
			scanf("%f",&c);
			area=((a+b)*c)/2;
			printf("\n PERIMETRO= %.2f",perimetro);
    		printf("\n AREA= %.2f",area);
    		break;	

		}
    	printf("\nDeseas repetir el programa?[1=Si]   ");
        scanf("%d",&resp);
	}while(resp==1);

    fin=time(NULL);
    printf("\n HORA DE SALIDA: %s ",asctime(localtime(&fin)));
    printf("UD. PERMANECIO EN EL PROGRAMA: %4.3f segundos \n\n ",difftime(fin,inicio));
    system("pause");
}
