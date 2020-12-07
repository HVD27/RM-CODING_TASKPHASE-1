#include<iostream.>
#include<conio.h>
using namespace std;
int main()
{

int a[10][10], b[10][10], c[10][10], m, n, p, q, k, i, j;
cout<<"ENTER THE ROWS AND COLUMNS OF MATRIX A: ";
cin>>m>>n;
cout<<"ENTER THE ROWS AND COLUMNS OF MATRIX B: ";
cin>>p>>q;
if(n==p)
{
cout<<"ENTER ELEMENTS OF A:";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"ENTER ELEMENTS OF B:";
for(i=0;i<p;i++)
{for(j=0;j<q;j++)
cin>>b[i][j];
}
cout<<"MATRIX A is: "<<endl;
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<a[i][j]<<"  ";
cout<<endl;
}
cout<<"MATRIX B is: "<<endl;
for(i=0;i<p;i++)
{for(j=0;j<q;j++)
cout<<b[i][j]<<"  ";
cout<<endl;
}
cout<<"PRODUCT OF TWO MATRICES: "<<endl;
for(i=0;i<m;i++)
{for(j=0;j<q;j++)
{c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
cout<<c[i][j]<<"  ";
}
cout<<endl;
}
}
else
cout<<"NOT COMPATIBLE.";
getch();
return 0;
}
