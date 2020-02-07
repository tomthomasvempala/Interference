#include <bits/stdc++.h>

using namespace std;
struct per
{
    per *next = NULL;
    per *prev = NULL;
    char name[30];
    char hostel[10];
    char clas[4];
    char gen;
    char place[4];
    char rep;
    char house;
    char skill[100];
};

per *top = NULL;
per *last = NULL;

void mkp(char name[],char hostel[],char gen,char clas[],char place[],char rep,char house)
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
    ptr->house=house;
    ptr->gen=gen;
    ptr->rep=rep;
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
    mkp( "Deon Joshy","Aneeta",'M',"CSA","Ernakulam",'n','T');
    mkp("Tom Vempala","Aneeta",'M',"CSA","Kottayam",'n','T');
    mkp("Karthika R","Vimala",'F',"CSA","Kottayam",'n','R');
    mkp("Poorab shenoy","MH",'M',"CSA","Kannur",'n','A');
    mkp("Sahil Sait","Backer",'M',"CSA","Kannur",'n','S');
mkp("Royce Elson","RR",'M',"CSA","Ernakulam",'n','R');
mkp("Sharat Jacob Jacob","Aneeta",'M',"CSB","Kottayam",'n','S');
mkp("Gayathry ","Nava Jyoti",'F',"CSA","Ernakulam",'n','D');
mkp("Roy Jose","RR",'M',"CSA","Ernakulam",'n','D');
mkp("Navaneeth S Nair","MH",'M',"CSB","Palakad",'n','T');
mkp("Vineeth M Vinoy","Aneeta",'M',"CSA","Ernakulam",'n','R');
mkp("Anand V","RR",'M',"CSA","Ernakulam",'n','T');
mkp("Syyed Anwar","Some other PG",'M',"CSB","Pathanamthitaa",'n','R');
mkp("Nayana Vinod","Udaya",'F',"CSB","Kottayam",'n','D');
mkp("Tony Augustine","Some other PG",'M',"CSB","Ernakulam",'y','S');
mkp("Gokulnath M Prabhu","Some other PG",'M',"CSB","Alapuzha",'n','R');
mkp("Aleena Baby","YMCA",'F',"CSB","Idukki",'y','D');
mkp("Sidharth S","Some other PG",'M',"CSA","Idukki",'y','S');
mkp("Tiss Joseph","YMCA",'F',"CSB","Kottayam",'n','D');
mkp("Anjali Rajendran ","Udaya",'F',"CSA","Kannur",'n','D');
mkp("Shweta jayan","YMCA",'F',"CSA","Thiruvananthapuram",'y','T');
mkp("Arun Sojan","Some other PG",'M',"CSB","Kottayam",'n','S');
mkp("Anjali Parapattu","YMCA",'F',"CSB","Ernakulam",'n','A');
mkp("Bharath Raj R","Shamla",'M',"CSA","Kollam",'n','S');
mkp("Denin Paul","Aneeta",'M',"CSB","Thrissur",'n','T');
mkp("George Sabu","Aneeta",'M',"CSB","Kottayam",'n','T');
mkp("Abiram p","Some other PG",'M',"CSB","Kozhikode",'n','A');
mkp("Joel Joshua","MH",'M',"CSA","Kasargode",'n','A');
mkp("Neeraj","Some other PG",'M',"CSA","Alapuzha",'n','T');
mkp("Akhil Prem","Some other PG",'M',"CSB","Kannur",'y','D');
mkp("Jomey j james","MH",'M',"CSB","Thiruvananthapuram",'n','A');
mkp("Gopika G","Vimala",'F',"CSB","Kottayam",'n','R');
mkp("Ashish Mathew Philip","MH",'M',"CSB","Thiruvananthapuram",'n','A');
mkp("Sebin Davis","MH",'M',"CSB","Ernakulam",'n','A');
mkp("Abraham Jacob","MH",'M',"CSA","Kannur",'y','A');
mkp("Deepak mathew","Aneeta",'M',"CSA","Kottayam",'y','R');
mkp("Balu UR","MH",'M',"CSB","Malapuram",'y','A');
mkp("Vikas P Nambiar","MH",'M',"CSB","Kannur",'y','A');
mkp("Nikita Menon","Udaya",'F',"CSB","Thrissur",'n','S');
mkp("Ansaf Muhammed","MH",'M',"CSB","Kannur",'y','A');
mkp("Jerin Tom","RR",'M',"CSA","Kottayam",'n','T');
mkp("Anjana Sudevan","YMCA",'F',"CSA","Kozhikode",'n','S');
mkp("Nihitha  S","Nava Jyoti",'F',"CSA","Idukki",'n','T');
mkp("Meghana O P","Nava Jyoti",'F',"CSB","Ernakulam",'n','T');
mkp("Jagath Jijo","Sky Blue",'M',"CSB","Kottayam",'n','T');
mkp("Faheem P P ","Shamla",'M',"CSA","Malapuram",'n','D');
mkp("Ashwin Girish","MH",'M',"CSA","Pathanamthitaa",'y','A');
mkp("Sreeram","MH",'M',"CSA","Kozhikode",'n','A');
    }

int main()
{
    char x;
    per *person;
    insertData();
    cout<<"Boy?";
    cin>>x;
    if(x=='y')
    {
        for(person=top;person!=NULL;person=person->next)
        {
            if(person->gen=='F')
                {
                    rmp(person);
                }
        }
    }
    else
    {
        for(person=top;person!=NULL;person=person->next)
        {
            if(person->gen=='M')
                {
                    rmp(person);
                }
        }
    }
     cout<<"CSA?";
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
    for(person=top;person!=NULL;person=person->next)
    {
        cout<<person->name<<endl;
    }
    return 0;
}