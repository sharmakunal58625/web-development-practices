
/*
#include<stdio.h>
#include<conio.h>
int main()
{
  int x;
  printf("Enter your cost");
  scanf("%d",&x);
  if(x<15)
  printf("blue shirt");
  else if(x<2)
  printf("rbkdsl");
  else 
  printf("red shirt");
getch();
}
*/

/*


#include<stdio.h>
#include<conio.h>
int main()
{
  int x;
  printf("Enter your cost");
  scanf("%d",&x);
  if(x<15)
  printf("blue shirt");
  else if(x<2)
  printf("rbkdsl");
  ellse 
  printf("red shirt");
getch();
}







#include <stdio.h>
#include <conio.h>
void main()
{
  int a;
  clrscr();
printf("enter a no.");
scanf("%d",&a);
if(a>0)
{
printf("it is positive no.");
}
else if(a<0){  printf("negative");
}
else 
{
printf("zero");
}
getch();
}
 #include <stdio.h>
#include<conio.h> 
void main()
{
int x,y;
clrscr();
printf("for checking of greater no.");
printf("\nenter value of x=");
scanf("\n %d",&x);
printf("\nenter value of y=");
scanf("%d",&y);
if(x>y)
{
printf("%d is greater then %d",x,y);
}
else if(y>x)
{
printf("%dis greater then %d",y,x);
}
else
{
printf("both are equal");
}
getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
int x;
clrscr();
printf("entet your amount so we can show our items to you ");
printf("\n under=100\n under=500 \n under=1000 \n under=10000");
printf("\n\nenter amount=");
scanf("%d",&x);
if(x<=100)
{
printf("\n1=item no.1      \t2=item no.2\n3=item no.3       \t4=item no.4\n5=item no.5       \t6=item no.7");

}
else if(x<=500)
{
printf("\n1=item no.1       \t2=item no.2\n3=item no.3       \t4=item no.4\n5=item no.5       \t6=item no.7");
}
else if(x<=1000)
{
printf("\n1=item no.1       \t2=item no.2\n3=item no.3       \t4=item no.4\n5=item no.5       \t6=item no.7");
}
else
{
printf("\n1=item no.1       \t2=item no.2\n3=item no.3       \t4=item no.4\n5=item no.5       \t6=item no.7");
}
getch();
}
    

#include <stdio.h>
#include <conio.h>
void main()
{
int x=1;
clrscr();
while(x<5)
{
printf("\nkunal\tsharma\tbhardwaj");x++;}
getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
int i;
clrscr();
printf ("odd no. btw 20 and 80\n");
for(i=20;i<40;i++)
{
if(i%2==1)
printf("%d\n",i);
else
printf("%d\n",i);
}
getch();
}
#include <stdio.h>
#include <conio.h>
void main ()
{
int i,x,y;
clrscr();
printf("enter a no.");
scanf("%d",&x);
printf("\ntable of %d",x);
for(i=10;i>=0;i--)
{
y=x*i;
printf("\n %d",y);
}
getch();
}/*
#include <stdio.h>
#include <conio.h>
void main()
{
int i=1;
clrscr();
printf("table of 8");
do
{if(i%8==0)
printf("\n%d",i);i++;
}
while(i<83);
getch();
}*/
/*#include <stdio.h>
#include <conio.h>
void main()
{
int i;
clrscr();
while(i<5000)
{
printf("\nnoob    \tnoob    \tnoob");
i++;}
getch();
}
/*
#include <stdio.h>
#include <conio.h>
void main()
{
int i;
clrscr();
printf("trial");

{if(i%8==1)
printf("\n%d",i);
i++;}
while(i<500);
getch();
}/*
#include <stdio.h>
#include <conio.h>
void main()k
{int i;
clrscr();
printf("once again");
for(i=1;i<500;i++)
{
printf("\nonce again");
}getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i=10,x,y;
clrscr();
printf("enter a no.");
scanf("%d",&x);
do
{
y=x*i;
printf("%d\n",&y);
i--;
}
while(i>=0);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i=10,x,y;
clrscr();
printf("enter a no.");
scanf("%d",&x);
while(i>=0)
{y=x*i;
printf("%d\n",y);
i--;
}
getch();
}

   //
#include<stdio.h>
#include<conio.h>
void main()
{
int choice ,a,b,s,q,w,e,r,t,y,u,i,o;
clrscr();
printf("\n1 addition");
printf("\n2 multiplaction");
printf("\n3 subctraction");
printf("\n4 division\n\n\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter two no.for add\n");
scanf("%d%d",&a,&b);
s=a+b;
printf("%d is sum of two no.  \n\n",s);


case 2:
printf("multiplication of two no. \n");
scanf("%d%d",&q,&w);
e=q*w;
printf("multiple is %d\n\n",e);


case 3:
printf("enter two no.for substraction\n");
scanf("%d%d",&r,&t);
y=r-t;
printf("substraction is %d\n",y);


case 4:
printf("enter two no.for division\n");
scanf("%d%d",&u,&i);
o=u/i;
printf("division is %d\n\n",o);
break;

default:
printf("invalid operation");
}
getch();
}*/

/*
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
add();
iseven();
substract();
multiply();
divide();
substract(); 
divide();
multiply();
}

add()
{
int a,b,c,d;
printf("\nenter 3 no. for addition\n");
scanf("%d%d%d",&a,&b,&c);
d=a+b+c;
printf("sum is %d",d);
}

iseven()
{
int a;
printf("\n\n\nenter a no. for check odd or even\n");
scanf("%d",&a);
if(a/2==0)
printf("odd no.");
else
printf("even no.");
}

substract() 
{
int a,b,c;
printf("\nenter two no.for subs.\n");
scanf("%d%d",&a,&b);
c=a-b;
printf("substraction is %d",c);
} 
divide()
{
float a,b,c;
printf("\nenter two no.for divide\n");
scanf("%f%f",&a,&b);
c=a/b;
printf("divesion is %f",c);
}
multiply()
{
int a,b,c;
printf("\nenter two no. multiplye\n");
scanf("%d%d",&a,&b);
c=a*b;    
printf("multiple is %d",c);
}
*/

    /* take nothing return something*/
  /*
#include<stdio.h>
#include<conio.h>
int add(void);
void main()

{
int s;
clrscr();
s=add();
printf("sum is %d",s);
getch();
}
int add()
{
int a,b,c;
printf("enter two no. for add");
scanf("%d%d",&a,&b);

return(a+b);
}
  
*/
/take something return something/
/*
#include<stdio.h>
#include<conio.h>
int add (int,int);
int main()
{
int x,y,z;
clrscr();
printf("enter two no.");
scanf("%d%d",&x,&y);
z=add(x,y);
printf("sum is %d",z);
getch();
}
int add(int a,int b)
{
int c;
c=a+b;
return(c);
}*/


/take not ret not/
/*
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
cube();
getch();
}
void cube()
{
int a,b;
printf("enter side of cube");
scanf("%d",&a);
b=a*a*a;
printf("cube is %d",b);
getch();
}
*/
/*
#include<stdio.h>
#include<conio.h>
int cube(void);
void main()
{
int x;
clrscr();
x=cube();
printf("cube is %d",x);
getch();
}
 int cube(void)
{
int a,b;
printf("enter edge of cube");
scanf("%d",&a);
b=a*a*a;
return (b);
}*/
/*
#include<stdio.h>
#include<conio.h>
int cube(int);
void main()
{
int x,y;
clrscr();
printf("enter e no.");
scanf("%d",&x);
y=cube(x);
printf("cube is %d",y);
getch();
}
int cube(int a )
{
int z;
z=(a*a*a);
return(z);
}*/
/*
#include<stdio.h>
#include<conio.h>
int max(int a,int b);
int min(int a,int b);
int biskut(int a,int b);
int main()
{
int a,b,c,d,z;
printf("enter two no.\n");
scanf("%d%d",&a,&b);
c=max(a,b);
d=min(a,b);
printf("\nmaximum is %d\n",c);
printf("\nminimim is %d\n",d);
}
int max(int a, int b)
{
if (a>b)
return a;
else if(b>a)
return b;
else
return ;
}
int min (int a,int b)
{
if(a<b)
return a;
else if(b<a)
return b;
else
return ;
 }
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
double diameter(double);
double circumference(double);
double area(double);
int main()
{
float r,c,a,d;
printf("\nenter radius of circle\n");
scanf("%f",&r);
d=diameter(radius);
c=circumference(radius);
a=area(radius);
printf("diameter of circle is = %f",d);
printf("circumference of circle is =%f",c);
printf("area of circle is =%f",a);
 getch();  
}
double daimeter(double radius)
{
double a;
a=2*r;
return a;}
double circumference(double radius)
{""
double a;
a=2*3.14*r;
return a;
   }
double area(double radius)
{
double a;
a=3.14*r*r;
return a;
}
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int a);
void main()
{
int n;
n=sum(5);
printf("sum of first 3 natural no. is %d \n",n);
}
int sum(int a)
{
int s;
if (a==1)
return a;
else
{s=a+sum(a-1);
return s;}
}*/
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,a[3],sum=0;
float avg;
printf("enter 3 no. for add\n");
for(i=0;i<=2;i++)
scanf("%d",&a[i]);
for(i=0;i<=2;i++)
sum = sum+a[i];
printf("sum is %d",sum);
avg=sum/3;
printf("\navg is %f",avg);
getch();
}*/
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[5],mul=1,i,sum=0;
float avg;
printf("\nenter five no. for addition");
printf("\nmultiplication\nand avg also\n");
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
for(i=0;i<=4;i++)
sum=sum+a[i];
printf("\nsum of five no. is %d\n",sum);
for(i=0;i<=4;i++)
mul=mul*a[i];
printf("\nmultiple is %d\n",mul);
for(i=0;i<=4;i++)
avg=sum/5;
printf("\navg of these five no. is %f\n",avg);
getch();
}*/
/*
#include<conio.h>
#include<stdio.h>
int main()
{
int a[50],i,sum=0,n;
clrscr();
printf("enter no. of elements\n");
scanf("%d",&n);
printf("\nenter elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum=sum+a[i];
printf("%d is sum ",sum);
getch();
}*/
/*
#include<conio.h>
#include<stdio.h>
int main()
{int i;
clrscr();
printf("enter a value\n");
scanf("%d",&i);
if(i<1000)
printf("ghu kha le anar ki gjah");
else
printf("ghu kha le");
getch();
}
//
#include<conio.h>
#include<stdio.h>  
int main()
{
int a[5],sum;
int b[5],i,n;
clrscr();
printf("enter five no.");
scanf("%d",&n);
for(i=0;i<5;i++)
printf("%d",a[i]);
for(i=0;i<5;i++)
sum=a[i]+b[i];
printf("%d",sum);
getch();
}*/
/*
#include<conio.h>
#include<stdio.h>
int main() 
{
int a[50],i,n,l,s;
clrscr();
printf("enter no. of elements\n");
scanf("%d",&n);
printf("\nenter elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
l=s=a[2];
for(i=0;i<n;i++)
{
if(a[i]>l)
l=a[i];
if(a[i]<s)
s=a[i];
}
printf("\n%d is smallest no.",s);
printf("\n%d is largest no.",l);
getch();
}//
#include<conio.h>
#include<stdio.h>  
int main()
{
int a[50],i,n,m,flag;
flag=0;
printf("enter no. of elements\n");
scanf("%d",&n);
printf("\nenter elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nenter a no. to search\n");
scanf("%d",&m);
for(i=0;i<n;i++)
{if(a[i]==m)
printf("element found\n");
break;}if(a[i]!=m)
printf("not found");
getch();
}*/
/*
if(a[i]==m)
{flag=1;
break;}
}
if(flag==1)
printf("\nelement is found at position %d",i-1);
else
printf("\nelement not found");
getch();
}*/
 /*   
#include<conio.h>
#include<stdio.h> 
int main()
{
int a[50]={1,2,3,4,5},i,v,l,n;
clrscr();
printf("\nenter no. of element\n");
scanf("%d",&n);
printf("\nenter element\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nenter element insertion\n");
scanf("%d",&v);
printf("\nenter loc\n");
scanf("%d",&l);
for(i=n;i>=l;i--)
a[i]=a[i-1];
a[l-1]=v;
for(i=0;i<=n;i++)
printf("%d\t",a[i]);
return(0);
}
*/
#include<conio.h>
#include<stdio.h> 
int main()
{
int a[50],i,n,l;
clrscr();
printf("enter no of element");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter loc");
scanf("%d",&l);
if(l>=n+1)
printf("not possible");
else
{
for(i=l-1;i<n-1;i++)
a[i]=a[i+1];
}
printf("result array");
for(i=0;i<n-1;i++)
printf("%d",&a[i]);
return (0);
}