#include<bits/stdc++.h>
using namespace std;
 string cr,de,se;
vector<string>so;
int main()
{
    cout<<"Enter the name of Your Directory:";
    string s;
    cin>>s;
    while(true)
    {
        cout<<endl;

        cout<<"1.Create file  "<<"2.Delete file  "<<"3.Search file  "<<endl;
        cout<<"4.Display file  "<<"5.Exit"<<endl;
        cout<<"Enter your Choice:";
        int n;
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<"Enter the file name:";
                cin>>cr;
                so.push_back(cr);
                break;
            case 2:
                cout<<"Enter the file for Delete:";
                cin>>de;
                for(int i=0;i<so.size();i++)
                {
                    if(so[i]==de)
                        so.pop_back( );
                }
                break;
            case 3:
                cout<<"Enter your file for search:";
                cin>>se;
                for(int i=0;i<so.size();i++)
                {
                    if(so[i]==se)
                    {
                        cout<<se<<" File Found";
                        break;
                    }

                    else
                    {
                        cout<<se<<" File not Fount"<<endl;
                        break;
                    }

                }
                break;
            case 4:
                cout<<"The file is:";
                for(int i=0;i<so.size();i++)
                {
                    cout<<so[i]<<" ";
                }
                cout<<endl;
                break;

            case 5:
                cout<<"The program has Exit thank you";
                return 0;
                break;

        }
    }
    return 0;
}
