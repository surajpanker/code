
#include <iostream>
using namespace std;
#include <math.h>
#include <vector>
#include <algorithm>
long int minRedius=161834419;
long int minValuediff(long int a,long int b)
{
    if(a>b){
        return a-b;
    }
    else
    {
        return b-a;
    }
}

long int minValue(long int a,long int b)
{
    if(a>b){
        return b;
    }
    else
    {
        return a;
    } 
}
int main()
{
    // vector<long int> plants={282475249,622650073,984943658,144108930,470211272,101027544,457850878,458777923}; 
    // vector<long int> sprinklers={823564440,115438165,784484492,74243042,114807987,137522503,441282327,16531729,823378840,143542612}; 
    
    vector<long int> plants={1,2,3}; 
    vector<long int> sprinklers={2};
    
    
    // vector<long int> plants={1,2,3,4}; 
    // vector<long int> sprinklers={1,2};
    for(int i=0;i<sprinklers.size();i++)
    {
         for(int j=0;j<plants.size();j++)
        {
            if(sprinklers[i]==plants[j])
            {
                long int k=minValue(minValuediff(plants[j],plants[j-1]),minValuediff(plants[j],plants[j+1]));
                if(k<minRedius)
                {
                    minRedius=k;
                }
            }
            // else{
            //     long int k=minValue(minValuediff(sprinklers[j],sprinklers[j-1]),minValuediff(sprinklers[j],sprinklers[j+1]));
            //     if(k<minRedius)
            //     {
            //         minRedius=k;
            //     } 
            // }
        }
    }
    cout<<minRedius;

    return 0;
}
