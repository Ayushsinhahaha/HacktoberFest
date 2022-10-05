#include<iostream.h>  
#include<conio.h>  
#include<graphics.h>  
#include<math.h>  
#include<stdio.h>  
#include<stdlib.h>  
#define pi 3.14  
class per  
{  
    float x[10], y[10], z [10], d;  
    float x1 [10], y1[10], xm, ym, z1 [10];  
    int i, k, j, n;  
    public:  
    void get();  
    void perpro();  
    void map();  
    void graph();  
    void plot1();  
}  
void per::get()  
{  
    cout<< "\n ENTER OF VERTICES";  
            cin>>n;  
    cout<<"\n ENTER";  
            for (i=0;i<n;i++)  
    {  
        cout<<"\n x["?i<<"], y["<<i<<"] and z ["<<i<<"]";  
        cin>>x[i]>>y[i]>>z[i];  
    }  
        cout<<"\n ENTER WIDTH FOR Z-AXIS-d";  
        cin>>d;  
}  
void per:: perpro()  
{  
    for(i=0;i<n;i++)  
    {  
        x1[i]=(d*x[i])/(z[i]+d);  
        y1[i]=(d*y[i])/(z[i]+d);  
        z1[i]=0;  
    }  
    cout<< "\n ENTER PROJECTION, VERTICES OF POLYGON ARE--";  
            for(i=0;i<n;i++)  
    {  
        cout<<"x?["<<i<<"]="<<x1[i]<< "\t";  
        cout<<"y?["<<i<<"]="<<y1[i]<< "\t";  
        cout<<"z?["<<i<<"]="<<z1[i]<< "\t";  
        cout<<"\n";  
    }  
}  
void per :: map()  
{  
    int gd=DETECT;  
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
void per::graph()  
{  
    xm= get maxx()/2;  
    ym=get maxy()/2  
    line (xm,0, xm, 2 * ym);  
    line (0, ym, 2 * xm, ym);  
}  
void per::plot1()  
{  
    for(i=0;i<n-1;i++)  
    {  
        line(x1[i]*100+xm,(-y1[i]*100+ym),x1[i+1]*100+xm,(-y1[i+1]*100+ym));  
    }  
line(x1[n-1]*100+xm,(-y1[n-1]*100+ym),x1[0]*100+xm,(-y1[0]*100+ym));  
    getch();  
}  
void main()  
{  
    class per a;  
    clrscr();  
    a.map();  
    a.graph();  
    a.get();  
    a.perpro();  
    a.graph();  
    a.plot1();  
    getch();  
}  
