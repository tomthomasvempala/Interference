#include <bits/stdc++.h>

int nrep,nhostel,nplace,nregion,nhouse,nrel,ngen,nclas,nds;

using namespace std;
struct per
{
    per *next = NULL;
    per *prev = NULL;
    char name[30];
    char hostel[20];
    char clas[4];
    char gen[2];
    char place[30];
    char rep[2];
    char house[2];
    char region[2];
    char ds[2];
    char rel[10];
    char skill[100];
};

per *top = NULL;
per *last = NULL;
char row[20],rowitem[20],value[30],lastrow[20],lastvalue[20];

void mkp(char name[],char hostel[],char gen[],char clas[],char place[],char rep[],char house[],char rel[],char ds[])
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
    if(strcmp(ptr->place,"Thrissur")==0||strcmp(ptr->place,"Ernakulam")==0||strcmp(ptr->place,"Idukki")==0||strcmp(ptr->place,"Kottayam")==0||strcmp(ptr->place,"Alapuzha")==0||strcmp(ptr->place,"Pathanamthitaa")==0)
        strcpy(ptr->region,"M");
    if(strcmp(ptr->place,"Kollam")==0||strcmp(ptr->place,"Thiruvananthapuram")==0)
        strcpy(ptr->region,"S");
    strcpy(ptr->house,house);
    strcpy(ptr->gen,gen);
    strcpy(ptr->rep,rep);
    strcpy(ptr->ds,ds);
    strcpy(ptr->rel,rel);
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
    else if(a==top&&a==last)
    {
        cout<<"Something's wrong";
       // exit(0);
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
    mkp("Deon Joshy","Aneeta","M","CSA","Ernakulam","n","T","christian","n");
    mkp("Tom Vempala","Aneeta","M","CSA","Kottayam","n","T","christian","n");
    mkp("Karthika R","Vimala","F","CSA","Kottayam","n","R","hindu","n");
    mkp("Poorab Shenoy","MH","M","CSA","Kannur","n","A","hindu","n");
    mkp("Sahil Sait","Backer","M","CSA","Kannur","n","S","muslim","n");
    mkp("Royce Elson","RR","M","CSA","Ernakulam","n","R","christian","n");
    mkp("Sharat Jacob Jacob","Aneeta","M","CSB","Kottayam","n","S","christian","n");
    mkp("Gayathry ","Nava Jyoti","F","CSA","Ernakulam","n","D","hindu","n");
    mkp("Roy Jose","RR","M","CSA","Ernakulam","n","D","christian","n");
    mkp("Navaneeth S Nair","MH","M","CSB","Palakad","n","T","hindu","n");
    mkp("Vineeth M Vinoy","Aneeta","M","CSA","Ernakulam","n","R","christian","n");
    mkp("Anand V","RR","M","CSA","Ernakulam","n","T","hindu","n");
    mkp("Shimil Abraham","Better Homes","M","CSA","Kozhikode","n","R","christian","n");
    mkp("Syyed Anwar","Some other PG","M","CSB","Pathanamthitaa","n","R","muslim","n");
    mkp("Nayana Vinod","Udaya","F","CSB","Kottayam","n","D","hindu","n");
    mkp("Tony Augustine","Some other PG","M","CSB","Ernakulam","y","S","christian","n");
    mkp("Gokulnath M Prabhu","Some other PG","M","CSB","Alapuzha","n","R","hindu","n");
    mkp("Aleena Baby","YMCA","F","CSB","Idukki","y","D","christian","n");
    mkp("Sidharth S","Some other PG","M","CSA","Idukki","y","S","hindu","n");
    mkp("Tiss Joseph","YMCA","F","CSB","Kottayam","n","D","christian","n");
    mkp("Anjali Rajendran ","Udaya","F","CSA","Kannur","n","D","hindu","n");
    mkp("Shweta Jayan","YMCA","F","CSA","Thiruvananthapuram","y","T","hindu","n");
    mkp("Arun Sojan","Some other PG","M","CSB","Kottayam","n","S","christian","n");
    mkp("Anjali Parapattu","YMCA","F","CSB","Ernakulam","n","A","christian","n");
    mkp("Bharath Raj R","Shamla","M","CSA","Kollam","n","S","hindu","n");
    mkp("Denin Paul","Aneeta","M","CSB","Thrissur","n","T","christian","n");
    mkp("George Sabu","Aneeta","M","CSB","Kottayam","n","T","christian","n");
    mkp("Abiram P","Some other PG","M","CSB","Kozhikode","n","A","hindu","n");
    mkp("Joel Joshua","MH","M","CSA","Kasargode","n","A","christian","n");
    mkp("Neeraj Hari","Some other PG","M","CSA","Alapuzha","n","T","hindu","n");
    mkp("Akhil Prem","Some other PG","M","CSB","Kannur","y","D","hindu","n");
    mkp("Jomey J James","MH","M","CSB","Thiruvananthapuram","n","A","christian","n");
    mkp("Gopika G","Vimala","F","CSB","Kottayam","n","R","hindu","n");
    mkp("Ashish Mathew Philip","MH","M","CSB","Thiruvananthapuram","n","A","christian","n");
    mkp("Sebin Davis","MH","M","CSB","Ernakulam","n","A","christian","n");
    mkp("Abraham Jacob","MH","M","CSA","Kannur","y","A","christian","n");
    mkp("Deepak Sembakam","Aneeta","M","CSA","Kottayam","y","R","christian","n");
    mkp("Balu U R","MH","M","CSB","Malapuram","y","A","hindu","n");
    mkp("Vikas P Nambiar","MH","M","CSB","Kannur","y","A","hindu","n");
    mkp("Nikita Menon","Udaya","F","CSB","Thrissur","n","S","hindu","n");
    mkp("Ansaf Muhammed","MH","M","CSB","Kannur","y","A","muslim","n");
    mkp("Jerin Tom","RR","M","CSA","Kottayam","n","T","christian","n");
    mkp("Anjana Sudevan","YMCA","F","CSA","Kozhikode","n","S","hindu","n");
    mkp("Nihitha  S","Nava Jyoti","F","CSA","Idukki","n","T","hindu","n");
    mkp("Meghana O P","Nava Jyoti","F","CSB","Ernakulam","n","T","hindu","n");
    mkp("Jagath Jijo","Sky Blue","M","CSB","Kottayam","n","T","hindu","n");
    mkp("Faheem P P ","Shamla","M","CSA","Malapuram","n","D","muslim","n");
    mkp("Ashwin Girish","MH","M","CSA","Pathanamthitaa","y","A","hindu","n");
    mkp("Sreeram","MH","M","CSA","Kozhikode","n","A","hindu","n");
    mkp("Nithin Antony","Aneeta","M","CSB","Alapuzha","n","T","christian","n");
    mkp("Govind Gayathri","Aneeta","M","CSA","Thiruvananthapuram","y","A","hindu","n");
    mkp("Alen J Ninan","RR","M","CSB","Malapuram","n","S","christian","n");
    ///DS
    mkp("Gokul Sagar","NIL","M","CSA","Ernakulam","n","T","hindu","y");
mkp("Khushi Shah","NIL","F","CSA","Ernakulam","n","S","hindu","y");
mkp("Hemanth","NIL","M","CSA","Ernakulam","n","A","hindu","y");
mkp("Aneetta Mary Sajan","NIL","F","CSA","Ernakulam","n","R","christian","y");
mkp("Muhammed Abnan M S ","NIL","M","CSA","Ernakulam","n","T","muslim","y");
mkp("Kevin abraham","NIL","M","CSA","Ernakulam","n","R","christian","y");
mkp("Pranav Jayashankar","NIL","M","CSA","Ernakulam","n","R","hindu","y");
mkp("Alan Phlipose N.V ","NIL","M","CSA","Ernakulam","n","R","christian","y");
mkp("Anagha S Menon","NIL","F","CSA","Ernakulam","n","T","hindu","y");
mkp("Elizabeth Mary Mathew","NIL","F","CSA","Ernakulam","n","D","christian","y");
mkp("Noel Eldho","NIL","M","CSA","Ernakulam","n","T","christian","y");
mkp("Vishruth S","NIL","M","CSA","Ernakulam","n","S","hindu","y");
mkp("Ebin Bigi","NIL","M","CSA","Ernakulam","n","T","christian","y");
mkp("Angela Tony","NIL","F","CSA","Ernakulam","n","S","christian","y");
mkp("Jessica jolly","NIL","F","CSA","Ernakulam","n","S","christian","y");
mkp("Nikhil George Mathew ","NIL","M","CSA","Ernakulam","n","T","christian","y");
mkp("Deepaklal T A","NIL","M","CSA","Ernakulam","n","D","hindu","y");
mkp("JOEL JOSEPH JUDE","NIL","M","CSA","Ernakulam","n","T","christian","y");
mkp("ANITHA S MENON","NIL","F","CSA","Ernakulam","n","S","hindu","y");
mkp("Ashique Ali P S","NIL","M","CSA","Ernakulam","n","D","muslim","y");
mkp("Arjun Sudheer ","NIL","M","CSA","Ernakulam","n","T","hindu","y");
mkp("Jabira Farhath ","NIL","F","CSA","Ernakulam","n","D","muslim","y");
mkp("Diya Naushad","NIL","F","CSA","Ernakulam","n","R","muslim","y");
mkp("P j ARAVIND","NIL","M","CSB","Ernakulam","y","R","hindu","y");
mkp("Gouri Hariharan","NIL","F","CSB","Ernakulam","n","R","hindu","y");
mkp("Vaishnav R","NIL","M","CSB","Ernakulam","n","R","hindu","y");
mkp("Navaneeth R","NIL","M","CSB","Ernakulam","n","S","hindu","y");
mkp("Rahul S Kumar","NIL","M","CSB","Ernakulam","n","A","hindu","y");
mkp("Adarsh r","NIL","M","CSB","Ernakulam","n","D","hindu","y");
mkp("Joseph Dominic Mathew","NIL","M","CSB","Ernakulam","y","R","christian","y");
mkp("Amith Raveendranath","NIL","M","CSB","Ernakulam","n","R","hindu","y");
mkp("Nikhil P S","NIL","M","CSB","Ernakulam","n","S","hindu","y");
mkp("Arjun Sarma","NIL","M","CSB","Ernakulam","n","S","hindu","y");
mkp("Steve Sam Jacob","NIL","M","CSB","Ernakulam","n","R","christian","y");
mkp("Pranoy Santhosh M","NIL","M","CSB","Ernakulam","y","D","hindu","y");
mkp("Aldrin Jenson","NIL","M","CSB","Ernakulam","n","T","christian","y");
mkp("Muhammed Razeen V","NIL","M","CSB","Ernakulam","n","R","muslim","y");
mkp("Nevin Manoj","NIL","M","CSB","Ernakulam","n","R","hindu","y");
mkp("V S Sreeram ","NIL","M","CSB","Ernakulam","y","R","hindu","y");
mkp("Pranav H. Nair ","NIL","M","CSB","Ernakulam","n","D","hindu","y");
mkp("Tony Augustine","NIL","M","CSB","Ernakulam","y","S","christian","y");
mkp("Adithya Anilkumar","NIL","M","CSB","Ernakulam","n","A","hindu","y");
mkp("Thomas john","NIL","M","CSB","Ernakulam","n","S","christian","y");
mkp("Tobin abraham","NIL","M","CSB","Ernakulam","y","D","christian","y");
mkp("Gautham S Baiju","NIL","M","CSB","Ernakulam","n","T","hindu","y");
mkp("Aravind P Sabu","NIL","M","CSB","Ernakulam","n","T","hindu","y");
mkp("Krishnendu Nambiar","NIL","F","CSB","Ernakulam","n","T","hindu","y");
mkp("Devanarayan J","NIL","M","CSB","Ernakulam","n","R","hindu","y");
mkp("Nikita Menon","NIL","F","CSB","Ernakulam","n","S","hindu","y");
mkp("Farhath Sulthana Jamal","NIL","F","CSB","Ernakulam","y","D","muslim","y");
//cout<<"holaaaaa"<<endl;

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
        if((abs(half-c)<=max)&&(strcmp(lastrow,"hostel")!=0)&&(strcmp(lastvalue,ptr->hostel)!=0)&&(nhostel!=0))
            {
                max=abs(half-c);
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
        if((abs(half-c)<=max)&&(strcmp(lastrow,"house")!=0)&&(strcmp(lastvalue,ptr->house)!=0)&&(nhouse!=0))
            {
                max=abs(half-c);
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
            if(strcmp(pp->clas,ptr->clas)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"clas")!=0)&&(strcmp(lastvalue,ptr->clas)!=0)&&(nclas!=0))
            {
                max=abs(half-c);
                strcpy(row,"clas");
                strcpy(value,ptr->clas);
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
            if(strcmp(pp->gen,ptr->gen)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"gen")!=0)&&(strcmp(lastvalue,ptr->gen)!=0)&&(ngen!=0))
            {
                max=abs(half-c);
                strcpy(row,"gen");
                strcpy(value,ptr->gen);
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
        if((abs(half-c)<=max)&&(strcmp(lastrow,"region")!=0)&&(strcmp(lastvalue,ptr->region)!=0)&&(nregion!=0))
            {
                max=abs(half-c);
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
            if(strcmp(pp->ds,ptr->ds)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"ds")!=0)&&(strcmp(lastvalue,ptr->ds)!=0)&&(nds!=0))
            {
                max=abs(half-c);
                strcpy(row,"ds");
                strcpy(value,ptr->ds);
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
            if(strcmp(pp->rel,ptr->rel)==0)
            c++;
            pp=pp->next;
        }
        if((abs(half-c)<=max)&&(strcmp(lastrow,"rel")!=0)&&(strcmp(lastvalue,ptr->rel)!=0)&&(nrel!=0))
            {
                max=abs(half-c);
                strcpy(row,"rel");
                strcpy(value,ptr->rel);
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
        if((abs(half-c)<=max)&&(strcmp(lastrow,"rep")!=0)&&(strcmp(lastvalue,ptr->rep)!=0)&&(nrep!=0))
            {
                max=abs(half-c);
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
        if((abs(half-c)<=max)&&(strcmp(lastvalue,ptr->place)!=0)&&(nplace!=0))
            {
                max=abs(half-c);
                strcpy(row,"place");
                strcpy(value,ptr->place);
            }
            ptr=ptr->next;
    }
    if(strcmp(lastrow,row)==0&&strcmp(lastvalue,value)==0)
    {
        cout<<"Insufficient Data"<<endl;
        strcpy(row,"done");
    }
    strcpy(lastrow,row);
    strcpy(lastvalue,value);
    //cout<<"Best row: "<<row<<endl<<"Value: "<<value<<endl<<"delta: "<<max<<endl;

}

int main()
{
    char choice;
    char x,da[14],regg[10]="North";
    per *person;
    do
    {
    nrep=1;
    nhostel=1;
    nds=1;
    nplace=1;
    nregion=1;
    nhouse=1;
    nclas=0;
    ngen=1;
    nrel=1;
    strcpy(da,"the person");
    top=NULL;
    last=NULL;
    insertData();
  /*  cout<<"Is it a Boy?"<<endl;
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
    }*/
    //randomize();
    if(rand()%2==0)
    {
       cout<<"Does "<<da<<" study in CSA?"<<endl;
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
    }
    else
    {
        cout<<"Is "<<da<<" a student of CSB?"<<endl;
    cin>>x;
    if(x=='y')
    {
        for(person=top;person!=NULL;person=person->next)
        {
            if(strcmp(person->clas,"CSA")==0)
                {
                    rmp(person);
                }
        }
    }
    else
    {
        for(person=top;person!=NULL;person=person->next)
        {
            if(strcmp(person->clas,"CSB")==0)
                {
                    rmp(person);
                }
        }
    }
    }
    //findrow();
  /* for(person=top;person!=NULL;person=person->next)
    {
       cout<<person->name<<"\n";
    }*/
  //  cout<<"People: :"<<count()<<endl;
  while(count()!=1)
   {
        findrow();
        for(person=top;person!=NULL;person=person->next)
    {
       cout<<person->name<<"\n";
    }
        if(strcmp(row,"done")==0)
            break;
        else if(strcmp(row,"clas")==0)
        {
            cout<<"Does "<<da<<" stay at "<<value<<" ?"<<endl;
            cin>>x;
            if(x=='y')
            {
                nclas=0;
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->clas,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            
            else if(x=='n')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->clas,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
            else 
            {
                nclas=0;
            }
        }
        else if(strcmp(row,"gen")==0)
        {
            if(strcmp(value,"M")==0)
                strcpy(regg,"Male");
            else    
                strcpy(regg,"Female");
            cout<<"Is "<<da<<" a "<<regg<<" ?"<<endl;
            cin>>x;
            if(x=='y')
            {
                ngen=0;
                
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->gen,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            
            else if(x=='n')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->gen,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
            else 
            {
                ngen=0;
            }
        }
        else if(strcmp(row,"hostel")==0)
        {
            if(strcmp(value,"Some other PG")==0)
                strcpy(value,"any PG other than RR");
            cout<<"Does "<<da<<" stay at "<<value<<" ?"<<endl;
            cin>>x;
            if(x=='y')
            {
                nhostel=0;
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->hostel,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            
            else if(x=='n')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->hostel,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
            else 
            {
                nhostel=0;
            }
        }
        else if(strcmp(row,"rel")==0)
        {
            cout<<"Is "<<da<<" a "<<value<<" ?"<<endl;
            cin>>x;
            if(x=='y')
            {
                nrel=0;
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->rel,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            else if(x=='n')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->rel,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
            else
            {
                nrel=0;
            }
            
        }
        else if(strcmp(row,"place")==0)
        {
            cout<<"Is "<<da<<" from "<<value<<" ?"<<endl;
            cin>>x;
            if(x=='y')
            {
                nplace=0;
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->place,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            else if(x=='n')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->place,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
            else 
            {
                nplace=0;
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
            cout<<"Is "<<da<<" from "<<regg<<" Kerala?"<<endl;
            cin>>x;
            if(x=='y')
            {
                nregion=0;
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->region,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            else if(x=='n')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->region,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
            else 
            {
                nregion=0;
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
            cout<<"Is "<<da<<" a memeber of "<<regg<<" House?"<<endl;
            cin>>x;
            if(x=='y')
            {
                nhouse=0;
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->house,value)!=0)
                    {
                        rmp(person);
                    }
                }
            }
            else if(x=='n')
            {
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->house,value)==0)
                    {
                        rmp(person);
                    }
                }
            }
            else 
            {
                nhouse=0;
            }
            
        }
        else if(strcmp(row,"rep")==0)
        {
            cout<<"Is "<<da<<" a repeater ?"<<endl;;
            cin>>x;
            if(x=='y')
            {
                nrep=0;
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->rep,"y")!=0)
                    {
                      //  cout<<person->name<<" "<<person->rep<<" To be deleted"<<endl; //tobedeleted
                        rmp(person);
                    }
                }
            }
            else if(x=='n')
            {
                nrep=0;
                for(person=top;person!=NULL;person=person->next)
                {
                  if(strcmp(person->rep,"n")!=0)
                    {
            //           cout<<person->name<<" "<<person->rep<<" To be deleted"<<endl; //tobedeleted
                        rmp(person);
                    }
                }
            }
            else 
            {
                nrep=0;
            }
            
        }
        else if(strcmp(row,"ds")==0)
        {
            cout<<"Is "<<da<<" a day-scholar ?"<<endl;;
            cin>>x;
            if(x=='y')
            {
                nhostel=0;
                nds=0;
                nplace=0;
                for(person=top;person!=NULL;person=person->next)
                {
                    if(strcmp(person->ds,"y")!=0)
                    {
                      //  cout<<person->name<<" "<<person->rep<<" To be deleted"<<endl; //tobedeleted
                        rmp(person);
                    }
                }
            }
            else if(x=='n')
            {
                nds=0;
                for(person=top;person!=NULL;person=person->next)
                {
                  if(strcmp(person->ds,"n")!=0)
                    {
            //           cout<<person->name<<" "<<person->rep<<" To be deleted"<<endl; //tobedeleted
                        rmp(person);
                    }
                }
            }
            else 
            {
                nds=0;
            }
            
        }
    /*  for(person=top;person!=NULL;person=person->next)
        { 
      cout<<person->name<<" "<<person->rel<<"\n";
        } //To here  */
   }

   if(strcmp(row,"done")!=0)
   {
      cout<<"\n\nYou were thinking of :"<<top->name<<endl<<endl;
   }

   cout<<"Do you want to continue? (y/n)"<<endl;
   cin>>choice;
    }while(choice=='Y' || choice=='y');

    return 0;
}
