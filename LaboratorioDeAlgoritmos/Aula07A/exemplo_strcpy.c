int main ()
{
	char origem[]="EXEMPLO DE TEXTO";
	char destino[20];

	// o conteúdo de origem é colocado em destino
	strcpy(destino, origem);

	printf("%s\n\n", destino);

	// O endereço de destino é somado de 11, 
   	// portanto, a partir do 12o. caractere o texto
	// "CESAR" é copiado.
	strcpy(destino+11, "CESAR");

	printf("%s\n\n", destino);	

	system("pause");
}


