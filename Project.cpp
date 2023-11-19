#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
int main()
{
    string txt;
    ifstream tt("truth.txt");
    ifstream ll("lie.txt");
    
    int truth_count = 0;
    int lie_count = 0;

    while(getline(tt,txt))
    {
        truth_count++;
    }
    while(getline(ll,txt))
    {
        lie_count++;
    }

    srand(time(0));
    int t1=0,t2=0,l=0;
    t1=rand()%truth_count;
    t1=rand()%truth_count;
    l=rand()%lie_count;

    ifstream tr("truth.txt");
    ifstream li("lie.txt");

    string truth1, truth2, lie;
    for(int i=0;i<=max(t2,l);i++)
    {
        string txt;
        getline(tr,txt);
        if (i==t1)
        {
            truth1=txt;
        }
        else if(i==t2)
        {
            truth2=txt;
        }    
    }
    for(int i=0;i<=l;i++)
    {
        getline(li,txt);
    }

    int bullet=1;
    int liechecker;
    for(int i=0;i<=max(t2,l);i++)
    {
        if (i==t1)
        {
            cout<<bullet<<"."<<truth1<<endl;
            bullet++;
        }
        else if(i==t2)
        {
            cout<<bullet<<"."<<truth2<<endl;
            bullet++;
        }
        if(i==l)
        {
            cout<<bullet<<"."<<lie<<endl;
            liechecker=bullet;
            bullet++;
        }   
    }
    int no;
    cout<<"Enter the lie no.";
    cin>>no;
    if(no==liechecker)
    {
        cout<<"Wooohooooo, you got it right";
    }
    else
    {
        cout<<"OOPS, The correct line is "<<lie<<endl;
        cout<<"Better luck next time";
    }
    return 0;
}