/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>

float average(int a[ ], int n){ 
   int i ; float sum=0;
   for(i=0;i<n;i++)
  {
    sum+=a[i]; 
  }
  sum=sum/n;
  return sum;
  }

int factors(int num,int arr[])
{
  int c=0;
  int k=0;
  for(int i=2;num>1;i++)
  {
    while(num%i==0)
    {
      c +=1;
      arr[k]=i;
      num = num/i;
      k++;
    }
  }
  return c;
}

int max(int a[ ], int n){
  
  int i,x=a[0];
  for(i=0;i<n;i++)
  {
      if(x<a[i])
       x=a[i];
  }
   return x; 
}
int min(int a[ ], int n){
  int i,x=a[0];
  for(i=0;i<n;i++)
  {
      if(x>a[i])
       x=a[i];
    }
   return x;  
}

int mode(int a[ ] , int n){
  int i,j ;
  int maxcount=0 , maxvalue=0;
  for(i=0 ; i<n; ++i){
    int count = 0;
    for(j=0; j<n ; ++j){
      if(a[i]==a[j])
        ++count ;
    }
    
    if(count > maxcount){
      maxcount = count;
      maxvalue = a[i];
    }
  }
   return maxvalue;
 }
