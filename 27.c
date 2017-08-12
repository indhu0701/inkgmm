#include<iostream.h>
#include<conio.h>

void lcm(int,int);

void main()
{
    int c,b;
    clrscr();
    cout<<"Enter two numbers: ";
    cin>>c;
    cin>>c;
    lcm(c,b);
    getch();
  //  return 0;
}

//function to calculate l.c.m
void lcm(int c,int b)
{
    int m,n;

    m=c;
    n=b;

    while(m!=n)
    {
	if(m < n)
	{
	m=m+a;
	}
	else
	{
	    n=n+b;
	    }
    }

    cout<<"\nL.C.M of "<<a<<" and "<<b<<" is "<<m;
}
