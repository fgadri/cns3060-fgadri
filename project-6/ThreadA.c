   #include <stdio.h>
   #include <stdlib.h>
   #include <pthread.h>
   
   
   int count;
   void* incrementCounter(void *m);

   
   int main()
  {
          count = 0;
          pthread_t thread1,thread2,thread3,thread4;
  
          pthread_create( &thread1,NULL,incrementCounter,(void*)0);
          pthread_create( &thread2,NULL,incrementCounter,(void*)0);
          pthread_create( &thread3,NULL,incrementCounter,(void*)0);
          pthread_create( &thread4,NULL,incrementCounter,(void*)0);
          printf("The value of count is: %d\n", count);
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
         }
                  return NULL;
  }
  

