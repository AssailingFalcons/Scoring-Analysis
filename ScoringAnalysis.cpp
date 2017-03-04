#include<iostream>
using namespace std;
int main()
{
    double total_lift;
    double empty_w;
    int dynamic;
    double payload;
    int score;
    empty_w=19; //pounds
    total_lift=32; //pounds
    for(int i=0;i<=12;i++)
    {
        dynamic=i;
        payload=total_lift-(empty_w+(dynamic*2));
        if(payload>=0)
        {
            score= payload+(payload*dynamic*1);
            cout<<"Flight Score: "<<score<<" For Dynamic Payload "<<dynamic<<" Static Payload: "<<payload<<"\n";
        }

    }
}
