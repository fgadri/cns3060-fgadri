#include <signal.h>
#include <stdio.h>

main ()

{

 int pid1;
 int pid2;
 int pid3;
 int pid4;
 
  printf("***********************************************\n");
  printf("Frank Gadri\n");
  printf("CS 3060\n");
  printf("************************************************\n");

  pid1 = fork();

 if (pid1 == 0) /* First parent */

   {

     while (1) /* Infinite loop */

       {

         printf ("****Parent:SIGUSR1 handler – Received a ‘task started’ signal from child \n");

         sleep (3);
	printf("Parent: waiting for it's siganl to be called\n");
         sleep(3);
       printf("Parent:I am done Goobye**\n");
        
       }

   }

 pid2 = fork (); /* Second  parent */

 if (pid2 == 0)

   {

     while (1) /* Infinite loop */

       {

         printf("**** parent:SIGUSR2 handler – Received a ‘task complete verification’ signal from parent\n");

         sleep (3);
         printf("**Parent:Child process has be created**\n");

       }

   }



   pid3 = fork(); //first child process 

  if (pid3 == 0)
    {
	while(1)
	{

	sleep(3);
        printf("****Chiild:SIGUSR1 handler – Received a ‘task start’ signal from the parent process\n");
	sleep(3);	
        printf("Calling parent to do something too\n");
        }
    }

     

  pid4 = fork(); //Second child process
   if (pid4 == 0)
     {
          while(1)
         {
  
   //       printf("Child Process is running\n");
           sleep(3);        
	   printf("**** Child SIGUSR2 handler – Received a ‘task complete verification’ signal from parent\n");
          // sleep(3);
           printf("Child Process is ruuning and waiting for a task**\n");
           sleep(3);
           printf("Child process is done doing it's work\n");
         }
      }


     sleep (3);
     //I couldn't figure out sigsuspend so i used the altenative SIGSTOP which does the same thing
    kill (pid1,SIGSTOP); /* Suspend first parent */
   //sleep(3);
    kill (pid2,SIGSTOP); /* Resume first parent */
  //  kill (pid1, SIGINT);
  //  kill(pid2,SIGINT);
    sleep(3);
    kill (pid3,SIGCONT);
    kill(pid4,SIGCONT);
  //  kill(pid3,SIGSTOP);
  //  kill(pid4,SIGSTOP);
    sleep(3);
   // kill(pid3,SIGINT);
 //   kill(pid4,SIGINT);
    kill(pid3,SIGSTOP);
   // kill (pid4,SIGCONT); 
  //  sleep(3);
    kill(pid4,SIGSTOP);
   //  kill(pid3,SIGCONT);
      sleep(3);
    kill(pid1,SIGCONT); 
    kill(pid2, SIGCONT);
    kill(pid1,SIGSTOP);
    kill(pid2,SIGSTOP);
    sleep(3);
    kill(pid3,SIGCONT);
    kill(pid4,SIGCONT);
    kill(pid3,SIGSTOP);
    kill(pid4,SIGSTOP);
    sleep(3);
    kill(pid1,SIGCONT);
    kill(pid1,SIGSTOP);
    sleep(3);
    kill(pid3,SIGCONT);
    kill(pid3,SIGSTOP);
    sleep(3);
    kill(pid1,SIGCONT);
    kill(pid1,SIGSTOP);
    
}
