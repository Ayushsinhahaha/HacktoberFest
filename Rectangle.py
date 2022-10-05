#include<iostream.h>  
#include <stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<stdlib.h>  
#define pi 3.14  
class arc  
{  
    float x[10], y[10], theta, h1, k1,r[0][10],ang;  
    float p[10][10],p1[10][10],x1[10], y1[10],xm,yx;  
    int i, k, j, n;  
    public:  
    void get();  
    void cal();  
    void map();  
    void graph();  
    void plot();  
    void plot1();  
};  
void arc::get()  
{  
    cout "<<"\n ENTER ANGLE OF ROTATION ";  
           cin>>ang;  
           n = 4;  
           cout<<"\n ENTER";  
         for (i=0; i<n; i++)  
         {  
               cout<<"\n x["<i<<"] and y["<<i<<"]";  
                cin>>x[i]>>y[i];  
         }  
         h1=x [0] + (([1]-x[0])/2);  
         k1=y[0]+(([3]-y[0])/2);  
         cout<<"\n MIDPOINT OF RECTANGLE IS--"<<h1<<"\t"<<k1;  
         theta=(ang*pi)/180?;  
         r[0][0]=cos (theta);  
         r[0][1]= -sin?(theta);  
         r[0][2]=(-h1*cos(theta))+(k1*sin(theta)+h1;  
         r[1][0]=sin (theta);  
         r [1][1]=cos (theta);  
         r [1][2]=(-h1*sin(theta))+(-k1*cos(theta)+k1;  
         r[2][0]=0;  
         r[2][1]=0;  
         r[2][2]=1;  
}  
void arc ::cal()  
{  
    for(i=0;i<n;i++)  
    {  
        p[0][i]=x[i];  
        p[1][i]=y[i];  
        p[2][i]=1;  
    }  
    for(i=0;i<3;i++)  
    {  
        for(j=0;j<n;j++)  
        {  
            p1[i][j]=0;  
                   for (k=0;k<3;k++)  
            {  
                p1[i][j]+=r[i][k]*p[k][j];  
            }  
        }  
    }  
    for(i=0;i<n;i++)  
    {  
        x1[i]=p1[0][i];  
        y1[i]=p[1][i];  
    }  
}  
void arc::map()  
{  
    int gd=DETECT, gm;  
    initgraph (&gd, &gm, "");  
    int errorcode = graphresult();  
    /*an error occurred */  
           if (errorcode!=grOK)  
    {  
        printf("Graphics error: %s \n",grapherrormsg (errorcode));  
                      printf("Press and key to halt: ");  
                      getch();  
                      exit(1); /* terminate with an error code */  
            }  
}  
void arc::graph()  
{  
    xm=getmaxx()/2;  
    ym=getmaxy()/2;  
    line (xm, 0, xm, 2 * ym);  
    line (0, ym, 2 * xm, ym);  
}  
void arc :: plot 1()  
{  
    for (i=0;i<n-1;i++)  
    {  
        circle (x1[i]+xm, (-y1[i]+ym), 2);  
        line (x1[i]+xm, (-y1[i]+ym), x[i+1] xm, (-y1[0]+ym));  
    }  
    line (x1[n-1] +xm, (-y1[n-1]+ym), x1[0]+xm, (-y1[0]+ym));  
    getch();  
}  
void arc :: plot ()  
{  
    for (i=0;i<n-1;i++)  
    {  
        circle (x[i]+xm, (-y[i]+ym), 2);  
        line (x[i]+xm, (-y[i]+ym), x[i+1] xm, (-y[i+1]+ym));  
    }  
    circle (x[n-1]+xm, (-y[n-1]+ym),2);  
    line (x[n-1]+xm, (-y[n-1]+ym), x[0]+xm, (-y[0]+ym));  
    getch();  
}  
void main ()  
{  
    class arc a;  
    clrscr();  
    a.map();  
    a.graph();  
    a.get();  
    a.cal();  
    a.plot();  
    a.plot1();  
    getch();  
}  
