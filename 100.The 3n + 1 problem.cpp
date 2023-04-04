#include<stdio.h>
int main()
{
  int n,a,j,i,count=1;
  while(scanf("%d%d",&i,&j)!=EOF)
  {
    int mx=1;
  if(i,j>0 && j>=i)
  {
    for(a=i;a<=j;a++)
    {
      n=a;
      count=1;
      while(n>1)
      {
      if(n%2==0)
      {
        n=n/2;
      }
      else
      {
        n=(3*n)+1;
      }
      count++;
      }
      if(count>mx)
      {
      mx=count;
      }
  }
}
 else if(i,j && j<i)
 {
  for(a=i;a>=j;a--)
  {
    n=a;
    count=1;
    while(n>1)
    {
    if(n%2==0)
    {
      n=n/2;
    }
    else
    {
      n=(3*n)+1;
    }
    count++;
    }
    if(count>mx)
    {
    mx=count;
    }
}
}
else
{
mx=0;
}
  printf("%d %d %d\n",i,j,mx);
}
  return 0;
}
