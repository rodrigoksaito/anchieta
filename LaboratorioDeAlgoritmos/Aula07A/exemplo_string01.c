int main()
{
   int i = 0; 
   char nome[] = {'P','a','d','r','e',' ',
                  'A','n','c','h','i','e','t','a','\0'};
   char curso[] = "Linguagem de Programacao C";
   // exibi��o usando printf
   printf("Nome: %s\n", nome);  
   printf("Curso: %s\n", curso);
   // exibi��o usando puts
   puts(nome);  
   puts(curso);
   // exibi��o caractere a caractere
   // quebrando linha a cada caractere
   while(nome[i]!='\0')
   {
      printf("%c\n", nome[i]);
      i++;
   }
   system("pause");
}

