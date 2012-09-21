#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

#define BUFSIZE 8192


int main(int argc,char **argv)
{

	int i;
	int j;
	FILE *fd;
  	char c, buf[BUFSIZE];
        int print_num = strcmp("-n",argv[1]); 
	int print_that = 1;
        int count = 1;

  printf("File Content:\n");
     

 if((argc == 2 && print_num == 0)|| argc == 1)
   {
	        
	c= getchar();
         



  while(c != EOF)
   {
	
      if(print_num == 0 && print_that)
        {
	
           printf("%d", count);	 
	   count++;
	 print_that = 0;
        }

 

       putchar(c);
   
     	
  if (c=='\n')
 print_that = 1;
 	c = getchar();
	
   }
 

 }else{

      if(print_num ==0)
        {
		j = 2;
         }
      else
         {
		j = 1;
          }



        for(j; j < argc; j++)
       {

	fd = fopen(argv[j], "r");

        if(fd == NULL)
       {
         
	fprintf(stderr,"fullcat: %s: ", argv[j]);
	perror("");     /*reads the main page for perror*/
	exit(1);
      }
         i = 1;

  while (i > 0)
 	{
 	i = fread(buf, 1, BUFSIZE, fd);

	if (i > 0)
      
	fwrite(buf, 1,i, stdout);
	

       if(print_num == 0)
         {   
		printf("%d", count);
		count++;
         }
        
     }
 	fclose(fd);
	return 0;
    }
  }  
}

