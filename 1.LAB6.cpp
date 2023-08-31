#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#define   SIZE   10



using namespace std;
int main()
{
	 float a[SIZE][SIZE],x[SIZE], ratio;
	 int i,j,k,n,top,bottom,left ,right;
	 n=4;
	 cout<<"Enter Coefficients of Augmented Matrix: "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   cout<<"a["<< i<<"]"<< j<<"]= ";
			   cin>>a[i][j];
	  }
	}
	cout<<"ENter top bottom left right";
	cin>>top>>bottom>>left>>right;
	a[1][5]=-(top+left);
	a[2][5]=-(top+right);
	 a[3][5]=-(left+bottom);
	 a[4][5]=-(bottom+right);	 
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
