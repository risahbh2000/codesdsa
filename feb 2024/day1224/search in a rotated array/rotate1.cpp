#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> vec = {7, 8, 1, 3, 5};

cout<<"enter the target :"<<endl;

int k;cin>>k;

        int n = vec.size();

int low = 0 ; int high = n-1;


while(low<=high)
{
    int mid = low + (high-low)/2;
    
     if(vec[mid]==k) 
     {
     cout<< mid; break;
     }
     else if(vec[low]<=vec[mid])
     {  
            if(vec[mid]>=k && vec[low] <=k)
            {
                high = mid-1;
            }
            else{   
                        low = mid +1;
             }

     }
        
      else{
                if(k<=vec[high] && k>=vec[mid] )
                {
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }

      }  





}




}
