#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> vec = {7, 8, 1, 3, 5};
int k;cin>>k;
        int n = vec.size();
        map<int,int> mp;
        

for(int i=0;i<n;i++)
{   
    mp[vec[i]] = i;

}



if( mp.find(k) != mp.end())
{
    cout<<mp[k];
}


cout<<endl;
 for(auto i:mp)
   {
    cout<<i.first<<" "<<i.second<<endl;
   }



}
