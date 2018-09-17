int main()
{
   char nome[80];
   char curso[80];
 
   // leitura usando o gets
   printf("Informe o seu nome: ");  
   gets(nome);
 
   // leitura usando o scanf
   printf("Informe o curso: ");
   scanf("%s", curso);
 
   // exibição usando puts
   puts(nome);  
   puts(curso);
 
   system("pause");
}


