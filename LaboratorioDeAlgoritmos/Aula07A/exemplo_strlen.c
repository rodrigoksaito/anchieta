int main ()
{
	int tam;
	char nome[100];

	printf("Digite seu nome: ");

	gets(nome);	

	tam = strlen(nome);

	printf ("Seu nome tem %d caracteres.\n\n", tam);

	system("pause");
}


