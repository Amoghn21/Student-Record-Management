#include<iostream>
#include <string>
#include<conio.h>
#include <limits>
#include<iomanip>
using namespace std;
class Node
{
   public:
       int roll_no;
       string name;
       float marks,per;
       Node* next;
     Node(int r,string n,float m)
     {
        roll_no=r;
        name=n;
        marks=m;
        next=NULL;
        per=(m/100)*100;
     }
};
class LinkedList
{
   public:
    Node *head=NULL;
    Node *tail=NULL;
    void Insert()
    {
        int r;
        string n;
        float m;
        cout<<"\n\n Enter Roll Number: ";
        cin>>r;
        cout<<"\n\n Enter Name: ";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin,n);
        cout<<"\n\n Enter Marks: ";
        cin>>m;
        Node *new_node=new Node(r,n,m);
        if(head==NULL)
        {
            head=tail=new_node;
        }
        else
        {
            tail->next=new_node;
            tail=new_node;
        }
        cout<<"\n\n Student data entered Successfully";

    }
    void Search()
    {
        if(head==NULL)
        {
            cout<<"\n\n No Data Entered";
        }
        else
        {  int t;
           cout<<"\n\n Enter the Roll No.of the required Student: ";
           cin>>t;
           Node* temp=head;
           while(temp!=NULL && temp->roll_no!=t)
           {
            temp=temp->next;
           }
           if(temp==NULL)
           {
               cout<<"\n  Entry not present in the Data";
           }
           else
           {
              int r;
              string n;
              float m;
              cout<<"\n\n Enter new Roll Number: ";
              cin>>r;
              temp->roll_no=r;
              cout<<"\n\n Enter Name: ";
              cin.ignore(numeric_limits<streamsize>::max(),'\n');
              getline(cin,n);
              temp->name=n;
              cout<<"\n\n Enter Marks: ";
              cin>>m;
              temp->marks=m;
              temp->per=(m/100)*100;
              cout<<"\n\n Data Updated Successfully";
           }
        }
    }
    void Count()
    {
        if(head==NULL)
        {
            cout<<"\n Empty(0 Data Entries)";
        }
        else
        {
            int c=0;
            Node* temp=head;
            while(temp)
            {
                c++;
                temp=temp->next;
            }
            cout<<"\n Data entries:"<<c;
        }
    }
    void UpdateName()
    {
        if(head==NULL)
        {
            cout<<"\n\n No Data Entered";
        }
        else
        {  
            cout<<"Enter the Roll No of the student: ";
            int x;
            cin>>x;
            Node* temp=head;
            while(temp->roll_no!=x && temp){temp=temp->next;}
            if(temp==NULL)
           cout<<"Invalid Roll No"<<endl;
            else 
            {
                cout<<"Enter the correct Name: ";
                string s;
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                getline(cin,s);
                temp->name=s;
                cout<<"\n\n Name updated Successfully"<<endl;
            }
           
        }
    }
    void UpdateRollNo()
    {
        if(head==NULL)
        {
            cout<<"\n\n No Data Entered";
        }
        else
        {  
            cout<<"Enter the Name of the student: ";
               string s;
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                getline(cin,s);
            Node* temp=head;
            while(temp->name!=s && temp){temp=temp->next;}
            if(temp==NULL)
            cout<<"Invalid Name"<<endl;
            else 
            {
                cout<<"Enter the correct RollNo: ";
                int p;
                cin>>p;
                temp->roll_no=p;
                cout<<"\n\n RollNo updated Successfully"<<endl;
            }
           
        }
    }
    void UpdateMarks()
    {
        if(head==NULL)
        {
            cout<<"\n\n No Data Entered";
        }
        else
        {  
            cout<<"Enter the Roll No of the student: ";
            int x;
            cin>>x;
            Node* temp=head;
            while(temp->roll_no!=x && temp){temp=temp->next;}
            if(temp==NULL)
            cout<<"Invalid Roll No"<<endl;
            else 
            {
                cout<<"Enter the correct Marks: ";
                 int h;
                 cin>>h;
                temp->marks=h;;
                cout<<"\n\n Marks updated Successfully"<<endl;
            }

        }
    }
    void Delete()
    {
         if(head==NULL)
        {
            cout<<"\n Empty(0 Data Entries)";
        }
        else
        {
           int t;
           cout<<"\n\n Enter the Roll No.of the  Student to be deleted: ";
           cin>>t;
           Node* temp=head;
           Node* prev;
           while(temp!=NULL && temp->roll_no!=t)
           {
            prev=temp;
            temp=temp->next;
           }
           if(temp==NULL)
           {
               cout<<"\n  Entry not present in the Data";
           }
           else
           {
             prev=temp->next;
             delete temp;
             cout<<"\n\n Deleted Successfully!!";
             
           }
        }
    }
    void ShowRecord()
    {
        if(head==NULL)
        {
            cout<<"\n\n List is Empty";
        }
        else
        {
            cout
        << left
        << setw(10)
        << "RollNo"
        << left
        << setw(15)
        << "Name"
        << left
        << setw(8)
        << "Marks"
        << left
        << setw(5)
        << "percentage"
        << endl;

         Node* temp=head;
         while(temp)
         {
             cout
            << left
            << setw(10)
            << temp->roll_no
            << left
            << setw(15)
            << temp->name
            << left
            << setw(10)
            << temp->marks
            << left
            << setw(5)
            << temp->per
            << endl;
            temp=temp->next;
         }
        }
    }
};
int main(){
  LinkedList x;
  start:
  cout<<"\n\n 1.Insert Record";
  cout<<"\n\n 2.Search Record";
  cout<<"\n\n 3.Count Students";
  cout<<"\n\n 4.Update Record";
  cout<<"\n\n 5.Delete Record";
  cout<<"\n\n 6.Show All Record";
  cout<<"\n\n 7.Exit";
  cout<<"\n\n\n Enter Your choice: ";
  int choice;
  cin>>choice;
  switch(choice)
  {
    case 1:
          system("cls");
          x.Insert();
          break;
    case 2:
          system("cls");
          x.Search();
          break;
    case 3:
          system("cls");
          x.Count();
          break;
    case 4:
          {system("cls");
            j:
            cout<<"\n\n 1.Update Name";
            cout<<"\n\n 2.update Roll.No";
            cout<<"\n\n 3.update Marks";
            cout<<"\n\n Enter Your choice: ";
            int o;
            cin>>o;
            switch(o)
            {
                case 1: system("cls");
                       x.UpdateName();
                       break;
                case 2: x.UpdateRollNo();
                       break;
                case 3: x.UpdateMarks();
                       break;
            }
            int k;
            ab:
            cout<<"\n\n 1-Update more";
            cout<<"\n\n 2- Done";
            cout<<"\n\n Select Your Choice: ";
            cin>>k;
            if(k==1)
            {
                goto j;
            }
            else if(k!=2)
            {
                cout<<"\n\n Enter Valid Choice";
                goto ab;
            }
            else
            goto start;
          }
          break;
    case 5: x.Delete();
          break;
    case 6:
          x.ShowRecord();
          break;
    case 7:
          exit(0);
    default:
          cout<<"\n\n\n Invalid Choice.. Enter a valid choice";
  }
getch();
goto start;
return 0; 
}
