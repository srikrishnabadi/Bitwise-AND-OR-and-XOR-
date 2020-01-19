#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,a[8]={0},b[8]={0},c[8],d[8],e[8];
  //printf("%d %d",a[4],b[1]);
  for(i=0;i<8;i++)
  {
      a[i]=n%2;
      n=n/2;
      b[i]=k%2;
      k=k/2;
  }
  //AND Operation...
  for(i=0;i<8;i++)
  {
      if(a[i]==b[i])
      {
          c[i]=a[i];
      }
      else{
        c[i]=0;
      }
  }
  printf("According AND operation the solution is..\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",a[i]);
  }
  printf("\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",b[i]);
  }
  printf("\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",c[i]);
  }
  //OR Operation...
  for(i=0;i<8;i++)
  {
      if(a[i]==b[i])
      {
          d[i]=a[i];
      }
      else{
        d[i]=1;
      }
  }
  printf("\nAccording OR operation the solution is..\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",a[i]);
  }
  printf("\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",b[i]);
  }
  printf("\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",d[i]);
  }
  //XOR Operation...
  for(i=0;i<8;i++)
  {
      if(a[i]==b[i])
      {
          e[i]=0;
      }
      else{
        e[i]=1;
      }
  }
  printf("\nAccording XOR operation the solution is..\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",a[i]);
  }
  printf("\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",b[i]);
  }
  printf("\n");
  for(i=7;i>=0;i--)
  {
      printf("%d",e[i]);
  }
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

