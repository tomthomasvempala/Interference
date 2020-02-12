#include <bits/stdc++.h>

using namespace std;
struct per
{
    per *next = NULL;
    per *prev = NULL;
    char name[30];
    char hostel[10];
    char clas[4];
    char gen[2];
    char place[4];
    char rep[2];
    char house[2];
    char region[2];
    char skill[100];
};

per *top = NULL;
per *last = NULL;
char row[20],rowitem[20],value[20],lastrow[20],lastvalue[20];

void mkp(char name[],char hostel[],char gen[],char clas[],char place[],char rep[],char house[])
{
    per *ptr = new per;
    if(top==NULL&&last==NULL)
    {
        top=ptr;
        last=ptr;
        last->next=NULL;
        last->prev=NULL;
    }
    else
    {
        last->next=ptr;
        ptr->prev=last;
        last=ptr;
        last->next=NULL;
    }
    
    strcpy(ptr->name,name);
    strcpy(ptr->hostel,hostel);
    strcpy(ptr->clas,clas);
    strcpy(ptr->place,place);
    if(strcmp(ptr->place,"Kasargode")==0||strcmp(ptr->place,"Kannur")==0||strcmp(ptr->place,"Kozhikode")==0||strcmp(ptr->place,"Wayanad")==0||strcmp(ptr->place,"Malapuram")==0||strcmp(ptr->place,"Palakad")==0)
        strcpy(ptr->region,"N");
    if(strcmp(ptr->place,"Thrissur")==0||strcmp(ptr->place,"Ernakulam")==0||strcmp(ptr->place,"Idukki")==0||strcmp(ptr->place,"Kottayam")==0||strcmp(ptr->place,"Alapuzha")==0||strcmp(ptr->place,"Pathanamthitta")==0)
        strcpy(ptr->region,"M");
    if(strcmp(ptr->place,"Kollam")==0||strcmp(ptr->place,"Thiruvananthapuram")==0)
        strcpy(ptr->region,"S");
    strcpy(ptr->house,house);
    strcpy(ptr->gen,gen);
    strcpy(ptr->rep,rep);
   // strcpy(ptr->skill,skill);
}

void rmp(per *a)
{
    per *x,*y;
    if(a==top)
    {
        top=top->next;
        top->prev=NULL;
    }
    else if(a==last)
    {
        last=last->prev;
        last->next=NULL;
    }
    else
    {
    x=a->prev;
    y=a->next;
    x->next=y;
    y->prev=x;
    }

}

void insertData()
{
    mkp("Deon Joshy","Aneeta","M","CSA","Ernakulam","n","T");
    mkp("Tom Vempala","Aneeta","M","CSA","Kottayam","n","T");
    mkp("Karthika R","Vimala","F","CSA","Kottayam","n","R");
    mkp("Poorab Shenoy","MH","M","CSA","Kannur","n","A");
    mkp("Sahil Sait","Backer","M","CSA","Kannur","n","S");
    mkp("Royce Elson","RR","M","CSA","Ernakulam","n","R");
    mkp("Sharat Jacob Jacob","Aneeta","M","CSB","Kottayam","n","S");    
    mkp("Gayathry ","Nava Jyoti","F","CSA","Ernakulam","n","D");
    mkp("Roy Jose","RR","M","CSA","Ernakulam","n","D");
    mkp("Navaneeth S Nair","MH","M","CSB","Palakad","n","T");
    mkp("Vineeth M Vinoy","Aneeta","M","CSA","Ernakulam","n","R");
    mkp("Anand V","RR","M","CSA","Ernakulam","n","T");
    mkp("Syyed Anwar","Some other PG","M","CSB","Pathanamthitaa","n","R");
    mkp("Nayana Vinod","Udaya","F","CSB","Kottayam","n","D");
    mkp("Tony Augustine","Some other PG","M","CSB","Ernakulam","y","S");
    mkp("Gokulnath M Prabhu","Some other PG","M","CSB","Alapuzha","n","R");
    mkp("Aleena Baby","YMCA","F","CSB","Idukki","y","D");
    mkp("Sidharth S","Some other PG","M","CSA","Idukki","y","S");
    mkp("Tiss Joseph","YMCA","F","CSB","Kottayam","n","D");
    mkp("Anjali Rajendran ","Udaya","F","CSA","Kannur","n","D");
    mkp("Shweta Jayan","YMCA","F","CSA","Thiruvananthapuram","y","T");
    mkp("Arun Sojan","Some other PG","M","CSB","Kottayam","n","S");
    mkp("Anjali Parapattu","YMCA","F","CSB","Ernakulam","n","A");
    mkp("Bharath Raj R","Shamla","M","CSA","Kollam","n","S");
    mkp("Denin Paul","Aneeta","M","CSB","Thrissur","n","T");
    mkp("George Sabu","Aneeta","M","CSB","Kottayam","n","T");
    mkp("Abiram p","Some other PG","M","CSB","Kozhikode","n","A");
    mkp("Joel Joshua","MH","M","CSA","Kasargode","n","A");
    mkp("Neeraj","Some other PG","M","CSA","Alapuzha","n","T");
    mkp("Akhil Prem","Some other PG","M","CSB","Kannur","y","D");
    mkp("Jomey j james","MH","M","CSB","Thiruvananthapuram","n","A");
    mkp("Gopika G","Vimala","F","CSB","Kottayam","n","R");
    mkp("Ashish Mathew Philip","MH","M","CSB","Thiruvananthapuram","n","A");
    mkp("Sebin Davis","MH","M","CSB","Ernakulam","n","A");
    mkp("Abraham Jacob","MH","M","CSA","Kannur","y","A");
    mkp("Deepak mathew","Aneeta","M","CSA","Kottayam","y","R");
    mkp("Balu UR","MH","M","CSB","Malapuram","y","A");
    mkp("Vikas P Nambiar","MH","M","CSB","Kannur","y","A");
    mkp("Nikita Menon","Udaya","F","CSB","Thrissur","n","S");
    mkp("Ansaf Muhammed","MH","M","CSB","Kannur","y","A");
    mkp("Jerin Tom","RR","M","CSA","Kottayam","n","T");
    mkp("Anjana Sudevan","YMCA","F","CSA","Kozhikode","n","S");
    mkp("Nihitha  S","Nava Jyoti","F","CSA","Idukki","n","T");
    mkp("Meghana O P","Nava Jyoti","F","CSB","Ernakulam","n","T");
    mkp("Jagath Jijo","Sky Blue","M","CSB","Kottayam","n","T");
    mkp("Faheem P P ","Shamla","M","CSA","Malapuram","n","D");
    mkp("Ashwin Girish","MH","M","CSA","Pathanamthitaa","y","A");
    mkp("Sreeram","MH","M","CSA","Kozhikode","n","A");
    mkp("Nithin Antony","Aneeta","M","CSB","Alapuzha","n","T");
    }

int count()
    {
        int i;
        per *ptr;
        for(i=0,ptr=top;ptr!=NULL;ptr=ptr->next)
            i++;
        return i;
    }
void findrow()
{
    per *ptr;
    ptr=top;
    int max=10000,half=count()/2;
    //cout<<half;
    while(ptr!=NULL)
    {
        per *pp=top;
        int c=0;
        while(pp!=NULL)
        {
            if(strcmp(pp->hostel,ptr->hostel)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"hostel")!=0)&&(strcmp(lastvalue,ptr->hostel)!=0))
            {
                max=half-c;
                strcpy(row,"hostel");
                strcpy(value,ptr->hostel);
            }
            ptr=ptr->next;
    }
    ptr=top;
    while(ptr!=NULL)
    {
        per *pp=top;
        int c=0;
        while(pp!=NULL)
        {
            if(strcmp(pp->house,ptr->house)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"house")!=0)&&(strcmp(lastvalue,ptr->house)!=0))
            {
                max=half-c;
                strcpy(row,"house");
                strcpy(value,ptr->house);
            }
            ptr=ptr->next;
    }
ptr=top;
    while(ptr!=NULL)
    {
        per *pp=top;
        int c=0;
        while(pp!=NULL)
        {
            if(strcmp(pp->region,ptr->region)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"region")!=0)&&(strcmp(lastvalue,ptr->region)!=0))
            {
                max=half-c;
                strcpy(row,"region");
                strcpy(value,ptr->region);
            }
            ptr=ptr->next;
    }
ptr=top;
    while(ptr!=NULL)
    {
        per *pp=top;
        int c=0;
        while(pp!=NULL)
        {
            if(strcmp(pp->rep,ptr->rep)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"rep")!=0)&&(strcmp(lastvalue,ptr->rep)!=0))
            {
                max=half-c;
                strcpy(row,"rep");
                strcpy(value,ptr->rep);
            }
            ptr=ptr->next;
    }
ptr=top;
    while(ptr!=NULL)
    {
        per *pp=top;
        int c=0;
        while(pp!=NULL)
        {
            if(strcmp(pp->place,ptr->place)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"place")!=0)&&(strcmp(lastvalue,ptr->place)!=0))
            {
                max=half-c;
                strcpy(row,"place");
                strcpy(value,ptr->place);
            }
            ptr=ptr->next;
    }
    strcpy(lastrow,row);
    strcpy(lastvalue,value);

    //cout<<"Best row: "<<row<<endl<<"Value: "<<value<<endl<<"delta: "<<max<<endl;

}

int main()
{
    char x,da[4],regg[10]="North";
    per *person;
    insertData();
    cout<<"Is it a Boy?";
    cin>>x;
    if(x=='y')
    {
        for(person=top;person!=NULL;person=person->next)
        {
            if(strcmp(person->gen,"F")==0)
                {
                    rmp(person);
                    strcpy(da,"he");
                }
        }
    }
    else
    {
        for(person=top;person!=NULL;person=person->next)
        {
            if(strcmp(person->gen,"M")==0)
                {
                    rmp(person);
                    strcpy(da,"she");
                }
        }
    }
    cout<<"Does "<<da<<" study in CSA?";
    cin>>x;
    if(x=='y')
    {
        for(person=top;person!=NULL;person=person->next)
        {
            if(strcmp(person->clas,"CSB")==0)
                {
                    rmp(person);
                }
        }
    }
    else
    {
        for(person=top;person!=NULL;person=person->next)
        {
            if(strcmp(person->clas,"CSA")==0)
                {
                    rmp(person);
                }
        }
    }
    //findrow();
  /*  for(person=top;person!=NULL;person=person->next)
    {
       cout<<person->name<<"\n";
    }
    cout<<"People: :"<<count()<<endl;*/
  while(count()!=1)
   {
        findrow(); cout<<count()<<" "<<row<<" "<<value<<endl;
        if(strcmp(row,"hostel")==0)
        {
            cout<<"Does "<<da<<" stay at "<<value<<" ?";
            cin>>x;
            if(x=='y')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->hostel,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            else
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->hostel,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
        }
        else if(strcmp(row,"place")==0)
        {
            cout<<"Is "<<da<<"  from "<<value<<" ?";
            cin>>x;
            if(x=='y')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->place,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            else
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->place,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
        }
        else if(strcmp(row,"region")==0)
        {
            if(strcmp(value,"M")==0)
                strcpy(regg,"Middle");
            else if(strcmp(value,"N")==0)
                strcpy(regg,"North");
            else
                strcpy(regg,"South");
            cout<<"Is "<<da<<" from "<<regg<<" Kerala?";
            cin>>x;
            if(x=='y')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->region,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            else
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->region,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
        }
        else if(strcmp(row,"house")==0)
        {
            if(strcmp(value,"T")==0)
                strcpy(regg,"Thandava");
            else if(strcmp(value,"S")==0)
                strcpy(regg,"Samhara");
            else if(strcmp(value,"R")==0)
                strcpy(regg,"Rakshasa");
            else if(strcmp(value,"D")==0)
                strcpy(regg,"Dhruva");
            else
                strcpy(regg,"Aryans");
            cout<<"Is "<<da<<" a memeber of "<<regg<<" House?";
            cin>>x;
            if(x=='y')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->house,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            else
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->house,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
        }
        for(person=top;person!=NULL;person=person->next)
        {
       cout<<person->name<<"\n";
        }
   }
   
    return 0;
}