int main ()
{
	char origem[]="EXEMPLO DE TEXTO";
	char destino[20];

	// o conte�do de origem � colocado em destino
	strcpy(destino, origem);

	printf("%s\n\n", destino);

	// O endere�o de destino � somado de 11, 
   	// portanto, a partir do 12o. caractere o texto
	// "CESAR" � copiado.
	strcpy(destino+11, "CESAR");

	printf("%s\n\n", destino);	

	system("pause");
}


