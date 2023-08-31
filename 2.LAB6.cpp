#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#define   SIZE   10
using namespace std;
double f(double x,double y){
	return (2*x*x*y*y);
}
int main()
{
	 float a[SIZE][SIZE],x[SIZE], ratio;
	 int i,j,k,n=4;
	 cout<<"Enter Coefficients of Augmented Matrix: "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   cout<<"a["<< i<<"]"<< j<<"]= ";
			   cin>>a[i][j];
	  }
	}
	a[1][5]=f(1,2);
	 a[2][5]=f(2,2);
	 a[3][5]=f(1,1);
	 a[4][5]=f(2,1);	 
     for(i=1;i<=n;i++)
     {
          if(a[i][i] == 0.0)
          {
               cout<<"Mathematical Error!";
               exit(0);
          }
          for(j=1;j<=n;j++)
          {
               if(i!=j)
               {
                    ratio = a[j][i]/a[i][i];
                    for(k=1;k<=n+1;k++)
                    {
                        a[j][k] = a[j][k] - ratio*a[i][k];
                    }
               }
          }
     }
     for(i=1;i<=n;i++)
     {
        x[i] = a[i][n+1]/a[i][i];
     }

	 cout<< endl<<"Solution: "<< endl;
	 for(i=1;i<=n;i++)
	 {
	  	cout<<"x["<< i<<"] = "<< x[i]<< endl;
	 }

	 return(0);
}
