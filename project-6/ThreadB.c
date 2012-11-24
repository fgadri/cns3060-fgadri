   #include <stdio.h>
   #include <stdlib.h>
   #include <pthread.h>
   
   
   int count;
   void* incrementCounter(void *m);
   
  int main()
  {
           count = 0;
            pthread_t thread1,thread2,thread3,thread4;
  
  
  
            int iret1,iret2,iret3,iret4;
            iret1= pthread_create( &thread1,NULL,incrementCounter,(void*)0);
            iret2= pthread_create( &thread2,NULL,incrementCounter,(void*)0);
           iret3= pthread_create( &thread3,NULL,incrementCounter,(void*)0);
           iret4= pthread_create( &thread4,NULL,incrementCounter,(void*)0);
  
  
            pthread_join( thread1, NULL);
            pthread_join( thread2, NULL);
           pthread_join( thread3, NULL);
            pthread_join( thread4, NULL);
  
  
            printf("The counter is at:%d\n",count);
           // printf("thread 2 returns:%d\n", iret2);
           // printf("thread 3 rettttns:%d\n", iret3);
           // printf("thread 4 prints :%d\n",iret4);
  


 }
    
  
    void *incrementCounter(void *m)
   {
            int i;
            for(i = 0;i< 10;++i)
            {
                    int tempValue = count;
                    sleep(1);
                    tempValue = tempValue + 1;
                    count = tempValue;
             //     printf("the counter is at:%d\n",count);
            }
                    return NULL;
   }
 

