
#include <iostream>
using namespace std;
#include <math.h>

//driver code
int main()
{
 //pattern input   
int n;
cin>>n;
int m=n*2;
    for(int i=1;i<=m;i++)
    {
        if(i==1) //first line
        {
            for(int i=1;i<=m;i++)
            { 
                if(i%2)
                  cout<<"*"<<" ";
            } 
            cout<<"\n";
        }
        else if(i==n) //last line
        {
            for(int i=1;i<=m;i++)
            { 
                if(i%2)
                    cout<<"*"<<" ";
            }
            cout<<"\n";
           break;
        }
        else{
            float mid =n/2;
            string t;
              for(int i=1;i<=m;i++)
            {   
                
                if(i==n)
                {
                    

                     cout<<t<<"*";
                }
                else{
                    t=t+" ";

                }
               
            }
            cout<<"\n";

        }
        
    }

    return 0;
}
