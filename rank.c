#include<stdio.h>
int fact(int);
int fact(int num){                       
int i,f=1;
 for(i=1;i<=num;i++)
   {f=f*i;}
 return f;
}
int main()
{
    long long int a[10],b[10],c[10],i,j,z,y,num,rank[100],n,p,prod=1,remainder,input;
    long long int w=1000000000;
    scanf("%lld",&n);
    for(p=0;p<n;p++)
{ y=0;


    long long int input, count;           
    int a[10];
    scanf("%lld", &input);

    for(count = 9; count >= 0; count--) {

        if(input <= 0)
        {
            a[count] = 0;
        }

        a[count] =input % 10;
   input /= 10;

    }
    for(i=0;i<10;i++)                    
    {  z=0;
     for(j=i+1;j<10;j++)
     {
         if(a[i]>a[j])
         {
             z=z+1;
         }
     } b[i]=z;
    }
    
    num=9;
     for(i=0;i<10;i++)                  
     {c[i]=b[i]*fact(num);             
     num--;
     y=y+c[i];
     }
     rank[p]=y+1;                        
}
    for(i=0;i<n;i++)
    {
       prod=prod*rank[i];               
    }
    remainder=prod%23456;              
    printf("%lld ",remainder);
       return 0;
}
