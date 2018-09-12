#include<bits/stdc++.h>
#include<ctime>
using namespace std;
string hash_(string,string,string);
 static int node_number2;
class data
{
public:
    string owner_id;
    string value;
    string owner_name;
    string hash_set_;
    data(){
    owner_id="";
    value="";
    owner_name="";

    }
    data(string owner_id,string value,string owner_name)
    {

        this->owner_id=owner_id;
        this->value=value;
        this->owner_name=owner_name;
        this->hash_set_=hash_(owner_id,value,owner_name);
    }
};
string hash_(string owner_id,string value,string owner_name)
{

    return (owner_id+value+owner_name);
}
string hash_2(time_t timestamp,data data1,int node_number)
{

    return (data1.hash_set_+to_string(node_number));
}

class node
{
public:
    time_t timestamp;
    data data1;
    int node_number;

    string node_id;
    node* reference_node_id;
    vector<node*>child_reference_id;
    node* genesis_reference_node_id;
    string hash_value;

    node(time_t timestamp,int node_number,string node_id)
    {
        this->timestamp=timestamp;
        data1;
        this->node_number=node_number2;
        node_number2++;
        this->node_id=node_id;
        this->reference_node_id=NULL;
        this->genesis_reference_node_id=NULL;
        hash_value=hash_2(timestamp,data1,node_number);
}
void set_data()//set the data of owner of a node
{

    cout<<"enter the owner_id";
    string owner_id;
    cin>>owner_id;
    data1.owner_id=owner_id;
    cout<<"enter the value";
    string value;
    cin>>value;
    data1.value=value;
    cout<<"enter the owner name";
    string owner_name;
    cin>>owner_name;
    data1.owner_name=owner_name;


}
 friend void set_child_node(node*);
 friend void create_child_of_node(node* );
 void decryption()//decrypting the value
 {
     cout<<this->data1.value;
 }
 void encryption()//encrypting the value
 {
     cout<<this->data1.value;
 }
 void edit_value_of_node()//editing the value of the node
 {
     cout<<"enter the new value of the node";
     int value;
     cin>>value;
     this->data1.value=value;
 }
 void transfer_ownership()//transfering the ownership of the node
 {
     cout<<"enter the owner detail";
     string owner_id;
     string value;
     string owner_name;
     cout<<"enter the new owner_id";
     cin>>owner_id;
     cout<<"enter the value";
     cin>>value;
     cout<<"enter the new owner_name";
     cin>>owner_name;
     this->data1.owner_id=owner_id;
     this->data1.value=value;
     this->data1.owner_name=owner_name;

 }
 int longest_chain_of_genesis_node()//longest chain of the genesis node
 {
     return child_reference_id.size();
 }
 int longest_chain_of_any_node()//longest chain of the any node
 {
     return child_reference_id.size();
 }

};
void create_child_of_node(node* p1) //creating child of any node
{
    ///time stamp node number,node id;
    time_t timestamp;

    string node_id;
    timestamp=time(0);
    cout<<"enter the node id";
        //string node_id;
        cin>>node_id;
        node* p2=new node(timestamp,node_number2,node_id);

        cout<<"enter the value of the node";
        int value1;
        cin>>value1;
        int limit=stoi(p1->data1.value);
        for(int i=0;i<p1->child_reference_id.size();i++)
        {

            //limit-=p1->child_reference_id[i].data1.value;

        }


   if(value1<=limit)
   {
       p1->child_reference_id.push_back(p2);
       node_number2++;

   }
   else
   {

       cout<<"child creation not possible";
   }
}


int main()
{
//int node_number=0;
int node_id=0;
time_t t1=time(0);
    node *p1=new node(t1,node_number2,to_string(node_id));
    p1->set_data();///genesis node created







}

