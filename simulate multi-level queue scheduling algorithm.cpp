#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,bt[20],wt[20],tat[20],i,j,pt[20],p[20],k,temp;
    float sum=0,avarage,so1,so2;
    n=4;
     cout<<"enter the process: ";
    for(i=0;i<n;i++)
    {
        p[i]=i;
        cin>>pt[i];
    }
    cout<<"enter Burst time: ";
    for(i=0;i<n;i++)
    {
        cin>>bt[i];
    }
    for(i=0;i<n;i++)
for(k=i+1;k<n;k++)
 if(pt[i] > pt[k])
 {
    temp=p[i];
    p[i]=p[k];
    p[k]=temp;
    temp=bt[i];
    bt[i]=bt[k];
    bt[k]=temp;
    temp=pt[i];
    pt[i]=pt[k];
    pt[k]=temp;
 }
    so1 = wt[0] = 0;
    so2 = tat[0] = bt[0];
    for(i=1;i<n;i++)
 {
    wt[i] = wt[i-1] + bt[i-1];
    tat[i] = tat[i-1] + bt[i];
    so1 = so1 + wt[i];
    so2 = so2 + tat[i];
 }

cout<<"\nprocess\t\tsystem \t\tbutst\twaiting";
for(i=0;i<n;i++)
{
   printf("\n%d \t\t %d \t\t%d \t%d",p[i],pt[i],bt[i],wt[i]);

}
cout<<endl;
cout<<"Avarage Time:"<<so1<<endl;
cout<<"Average Turnaround time:"<<so2<<endl;

}
