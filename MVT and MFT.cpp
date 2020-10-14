#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,p;
    cout<<"Enter the total memory available (in bytes)-";
    cin>>n;
    cout<<"Enter the block size (in bytes)-";
    cin>>b;
    cout<<"Enter the number of process-";
    cin>>p;
    int ex=n%b;
    int bx=n/b;
    vector<int>so;
    int num,k=1;
    while(p--)
    {
        cout<<"Enter memory required for process "<<k<<" (in bytes)-";
        cin>>num;
        so.push_back(num);
        k++;
    }
    cout<<"Process\tMemory required\tAllocated\tInternal Fragmentation"<<endl;
    int counter=0,s=0;
    vector<int>ne;
    for(int i=0;i<so.size();i++)
    {
        if(s==bx)break;
        else{
            if(so[i]>b)
            cout<<i+1<<"\t\t"<<so[i]<<"\t\t"<<"NO"<<"\t\t"<<"----";
        else
        {
            cout<<i+1<<"\t\t"<<so[i]<<"\t\t"<<"YES"<<"\t\t"<<b-so[i];
            counter=counter+(b-so[i]);
            ne.push_back(b-so[i]);
               s++;
        }
        }
        cout<<endl;
    }
    //cout<<s<<endl;
    cout<<"Memory is Full,Remaining processes cannot be accommodated"<<endl;
    cout<<"Total Internal Fragmentation is :"<<counter<<endl;
    cout<<"Total External Fragmentation is :"<<ex<<endl;
    return 0;

}
