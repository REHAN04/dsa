#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    int i=-1,j=0;
        while(j<str.length())
        {
            if(str[j]=='.')
            {
                reverse(str.begin()+i+1,str.begin()+j);
                i=j;
            }
            j++;
        }
        cout<<str<<endl;
  return 0;
}

