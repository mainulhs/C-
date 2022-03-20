void del(char str[],char ch);
void main()
{
char str[10],ch;
printf("Enter the string : \n");
gets(str);
printf("Enter character which you
want to delete : \n");
scanf("%ch",&ch);
del(str,ch);
}
void del(char str[],char ch)
{
int i,j=0,size;
char ch1,str1[10];
size=strlen(str);
for(i=0;i<size;i++)
{
if(str[i] != ch)
{
ch1 = str[i];
str1[j] = ch1;
j++;
}
}
str1[j]='';
printf("corrected string is : %s
\n",str1);
}