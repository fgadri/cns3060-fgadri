#include <iostream>
//#include <stdlib.h>
#include <string>
#include <cstdlib> 
# include <cstdio>

using namespace std;


int request[100];
int st;
int cylinders;
int n;


void Random(void)
{
   
    for(int i=0;i<n;i++)
    {
       //srand(request[(rand()%n)]);
       request[i]=rand()%cylinders+1;
    }  
} 

void display(void)
{
	 cout<<"\nThe requests are : \n";
     for(int i=0;i<n;i++)
      cout<<" "<<request[i]<<" ";
}


 int main()
{
   int choice;
   void fcfs(void );
   void scan(void );
   cout<<"Enter no. of cylinders in hard disk :";
	cin>>cylinders;
   cout<<"And Enter the Starting Cylinder position:";
   	 cin>>st;
  
  
   cout<<"\npress 0 to generate random disk requests\n";
   cout<< "And Any other Number to give your own request:";
   cin>>choice;
   if(choice==0)
   {
       cout<<"\nEnter no. of requests to generate randomly : ";
       cin>>n;
       Random();
   }
   else
   {
       cout<<"\nEnter the cylinders requested (-1 to break): \n";
       while(1)
       {
          cin>>request[n++];
          if(request[n-1]== -1||n==100)
          {
              n--;
              break;
            
          }  
        
       }      
   }
  
   cout<<"\nEnter the scheduling algorithm that you want to implement:\n ";  
   cout<<"(0:1st Come 1st Serve,    1:Scan Look or elevator) : "; 
   cin>>choice;
   switch(choice)
   {
      case 0:
           fcfs();
           break;     
      case 1:
           scan();
           break;   
      default:
         break;
   }
  
  // getch();
   return 0;
}       
            
void fcfs(void )
{
     int total=0,i;              //no of cylinders traversed
     display();
	 cout<<"\n\nFirst Come First Serve :";
     cout<<"\n\n The traversal is shown below :\n\n"<<st;
     for(i=0;i<n;i++)
     {
         cout<<"-->"<<request[i];
         total=total+abs(request[i]-st);
         st=request[i];    
     }
     cout<<"\n\nNo. of Tracks traversed : "<<total <<"\n";
}                      

void scan(void )
{
     int total=0,i,j,temp;
     display();
     for(i=0;i<n;i++)
        for(j=0;j<n-1-i;j++)
        {
            if(request[j]>request[j+1])
            {
               temp=request[j];
               request[j]=request[j+1];
               request[j+1]=temp;
            }
        }
     display();
    
     cout<<" \nThe traversal is shown below : \n\n"<<st;
    
     if(st<request[0])
     {
        for(i=0;i<n;i++)
        {
           cout<<"-->"<<request[i];
           total+=abs(request[i]-st);
           st=request[i];
        }
     }
     else
     {
        
         i=0;
         temp=0;
         while(st>request[i++])
            temp++;
         for(i=temp;i<n;i++)
         {
           
                   
          
               cout<<"-->"<<request[i];
               total+=abs(request[i]-st);
               st=request[i];
   
               if(i==n-1)
               {
                 
                  total=total+2*cylinders-request[i];
                  st=0;
                  i=0;
                  n=temp;
                  if(st!=cylinders)
                  {
                     cout<<"-->"<<cylinders;
                     cout<<"-->"<<1;
                  }
               }
          }     
                    
       }               
        
       cout<<"\nTotal cylinders traversed :"<<total<<"\n"; 
    
}    
