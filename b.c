#include "sfs.h"

int main()
{
	while (1) { 
        // print shell line 
        mountSFS();
		printPrompt(); 
		char str1[100];
   		scanf("%s",str1);
 
    	if(strcmp(str1,"exit")==0)
    		break;
    	else if(strcmp(str1,"display")==0)
    		{
                char str2[100];
                scanf("%s",str2);
                display(str2);
            }
    	else if(strcmp(str1,"ls")==0)
    		ls();
        else if (strcmp(str1,"create")==0)
            {
                char str2[100];
                scanf("%s",str2);
                create(str2);
            }
        else if (strcmp(str1,"stats")==0)
            stats();
        else if (strcmp(str1,"cd")==0)
            {
                char str2[100];
                scanf("%s",str2);
                cd(str2);
            }
        else if (strcmp(str1,"md")==0)
            {
                char str2[100];
                scanf("%s",str2);
                md(str2);
            }
        else if (strcmp(str1,"rd")==0)
            rd();
        else if (strcmp(str1,"rm")==0)
            {
                char str2[100];
                scanf("%s",str2);
                rm(str2);
            }
        else
            printf("Enter valid command\n");
      
    } 
    return 0;
}
