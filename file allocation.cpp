#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
        vector<int>b;
        vector<string>so;
    int i=1;

    while(n--)
    {
        int p,q;
        string s;

        cout<<"Enter file name "<<i<<": ";
        cin>>s;
        so.push_back(s);
        cout<<"enter Starting block of file "<<i<<": ";
        cin>>p;
        a.push_back(p);
        cout<<"Enter no of blocks if file "<<i<<": ";
        cin>>q;
        b.push_back(q);
        i++;
    }
    cout<<"File name\tStart Block\tNo of Blocks\t blocks Occupied"<<endl;
    int j;
    for( j=0;j<a.size();j++)
    {
        //if(j==(a.size()-1))break;

        cout<<so[j]<<"\t\t"<<a[j]<<"\t\t"<<b[j]<<"\t\t";
        for(int k=a[j];k<(a[j]+b[j]);k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }


}
