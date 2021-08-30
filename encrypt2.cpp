#include<iostream>
using namespace std;
void compress(string s)
{
    
    string ans;
    int n=1;
    int si=s.size();
    for(int i=0;i<si;i++)
    {
        if(s[i]!=s[i+1])
        {
            ans+=s[i];
            if(n==1){}
            else{
            ans+=to_string(n);
            }
            n=1;
        }
        else
        {
            n++;
        }
    }
    
    cout<<ans;
}
void decompress(string s)
{
    
    int si=s.size();
    string ans;
    string a1;
    for(int i=0;i<si;i++)
    {
        
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            a1 =s[i];
            
            ans+=a1;
            
        }
        else
        {
            int m=int(s[i])-48;
            
            for(int j=0;j<m;j++)
            {
                ans+=a1;
            }
            a1="";
        }
    }
    cout<<ans;
}
int main(){
    string s;
    cin>>s;
    int chn;
    cout<<"1.compress\n";
    cout<<"2.decompress\n";
    cin>>chn;
    switch (chn)
    {
    case 1:
        compress(s);
        break;
    case 2:
        decompress(s);
        break;
    }
    
}