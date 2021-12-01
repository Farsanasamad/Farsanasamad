#include<stdio.h>
#include<string.h>
 int main()
	{
   char string[20];
   int i,length,flag=0;
    printf("enter a string");
    gets(string);
    length=strlen(string);
    for(i=0;i<length;i++)
      {
       if(string[i]!=string[length-i-1])
       
{
             flag=1;
              break;

}
}

if(flag==0)
{
printf("strig is  palnrm");
}
else
{
printf("strig is not palnrm");
}
return 0;	
}
