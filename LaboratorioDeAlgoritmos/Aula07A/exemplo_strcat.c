int main ()
{
	char destino[100]="Seja bem vindo ", nome[80];

	printf ("Entre com seu nome: ");
	gets(nome);

	// destino conterá o texto 
	// "Seja bem vindo" + o nome digitado
	strcat(destino, nome);

	printf("%s\n\n", destino);

	system("pause");
}


