#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int totalwords;
  	totalwords = 1;

  	gets(str);
  	 	   	
  	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}	
	printf("\n The Total  Words : %d\n", totalwords);
	
  	return 0;
}
