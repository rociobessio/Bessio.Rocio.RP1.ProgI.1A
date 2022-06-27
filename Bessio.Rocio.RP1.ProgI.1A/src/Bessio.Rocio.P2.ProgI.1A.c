/*
 ============================================================================
 Name        : 1A.c
 Author      : Bessio Rocio Soledad
 Date        : 13/06/2022
 Tema        : RECU PRIMER PARCIAL
 Division    : 1A
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



/**
 * 2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
 * y su responsabilidad es invertir los caracteres de la misma.
 * Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
 */
void invertirCadena(char* cadena);

/**
 * 3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
 * y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
 *  Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
 */

//void ordenarCaracteres(char* cadenaCaracteres);

int main(void) {
	setbuf(stdout, NULL);

	char cadena[15] = "UTN-FRA";

	char cadenaOrdenar[10] = "agilmoort";

	invertirCadena(cadena);

	//ordenarCaracteres(cadenaOrdenar);

	return EXIT_SUCCESS;
}

void invertirCadena(char* cadena)
{

	if(cadena!=NULL)
	{
		 for(int i=(strlen(cadena)-1);i>=0;i--)// i = tamanio(string)-1; i>=0; i-- (decrementa posicion i)
		 {
			 printf("%c",cadena[i]); //SE VA IMPRIMIENDO CARACTER POR CARACTER
		 }
	}

}
/*
void ordenarCaracteres(char* cadenaCaracteres)
{
	char aux;
	if(cadenaCaracteres!=NULL)
	{
		for(int i=0;i<(strlen(cadenaCaracteres)-1);i++)
		{
			for(int j=i+1;j<(strlen(cadenaCaracteres));j++)//SI TIPO ES IGUAL ORDENAR POR EFECTIVIDAD
			{
				if((cadenaCaracteres[i]>cadenaCaracteres[j]))
				{
					aux = cadenaCaracteres[i];
					cadenaCaracteres[i] = cadenaCaracteres[j];
					cadenaCaracteres[j] = aux;
				}
			}
		}
	}

}*/
