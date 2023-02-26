#include <iostream>
#include <fstream>

void funcDraw(int n)
{
    char** mtrx = new char*[n];

    for (int i =0; i<n;i++)
    {
        mtrx[i] = new char[n];
    }

    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            if(j==n-1 || j==0)
            mtrx[i][j]='|';
            else if(i==0 || i==n-1)
            mtrx[i][j]='_';
            else if(i==j || i+j==n-1)
            mtrx[i][j]='*';
            /*else if(i<j&&i+j<n-1)
            {
                if(n%2)
                {
                    
                }
                /*for(int k = 0; k < (n/2)-1+(n%2); k++)
                {
                    if(abs(i-j)==k==1||abs(i-j)==k==1)
                    {
                        mtrx[i][j]='A'+static_cast<char>(k);
                        break;
                    }
                }
            }*/
            else 
            {  
                mtrx[i][j] = '0';
                /*for (int k = 1;k<=(n/2)-1;k++)
                {
                    if(std::abs(i-j)==k)
                    mtrx[i][j] = 'A'+(k-1);
                }*/
            }
        }
    }

    //for (int i = 0;i<n;i++)
    //{
      //  for (int j = 0;j<n;j++)
       // {
         //   if(j<j&&i+j<n-1)
           // {
               // if(n%2)
             //   {
                 //   int still = (n/2)-1+(n%2);
                   // while()
                //}
                //else
                //{

                //}
            //}
    
    std::ofstream file("RomanKek.txt");
    for (int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            file<<mtrx[i][j]<<" ";
        }
        file<<"\n";
    }
    std::cout<<"\nDone.";
}

int main()
{
    int size;
    std::cout<<"Input size:\n";
    std::cin>>size;
    funcDraw(size);
}