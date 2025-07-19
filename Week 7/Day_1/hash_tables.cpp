/*C++ program to demonstrate hash tables using three different methods: 
separate chaining, open addressing (linear probing), and C++ standard library hash tables. 
The program should include functions to insert and delete keys, and display the hash table.*/

#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>

using namespace std;

class HashTableChaining{
private:
    int BUCKET;
    vector<list<int>> table;

public:
    HashTableChaining(int V);
    void InsertItem(int key);
    void deleteItem(int key);
    int hashFunction(int key){
        return (key % BUCKET);
    }
    void displayHash();
};
HashTableChaining::HashTableChaining(int b){
    BUCKET=b;
    table.resize(BUCKET);
}
void HashTableChaining::InsertItem(int key)
{
    int index=hashFunction(key);
    table[index].push_back(key);
}
void HashTableChaining::deleteItem(int key){
    int index=hashFunction(key);
    list<int>::iterator i;
    for(i=table[index].begin();i!=table[index].end();i++)
    {
        if(*i==key)
        {
            break;
        }
    }
    if(i!=table[index].end())
    {
        table[index].erase(i);
    }
}
void HashTableChaining::displayHash(){
    for(int i=0;i<BUCKET;i++){
        cout<<i;
        for(auto x:table[i])
        {
            cout<<"-->"<<x;
        }
        cout<<endl;
    }
}

class HashTableLinearProbing{
private:
    vector<int> table;
    int size;
    int capacity;
public:
    HashTableLinearProbing(int cap);
    void insertItem(int key);
    void deleteItem(int key);
    int hashFunction(int key){
        return key % capacity;
    }
    void displayHash();
};

HashTableLinearProbing::HashTableLinearProbing(int cap)
{
    capacity=cap;
    size=0;
    table.resize(capacity, -1);
}

void HashTableLinearProbing::insertItem(int key)
{
    if(size==capacity)
    {
        cout<<"Hash Table is Full!!!\n";
        return;
    }
    int index=hashFunction(key);

    while(table[index] != -1 && table[index] != -2 && table[index] != key){
        index=(index+1)%capacity;
    }

    if(table[index]==key)
    {
        cout<<"Key already exists\n";
        return;
    }
    table[index]=key;
    size++;
}
void HashTableLinearProbing::deleteItem(int key){
    int index=hashFunction(key);
    int startIndex=index;

    while(table[index]!=-1)
    {
        if(table[index]==key)
        {
            table[index]=-2;
            size--;
            return;
        }
        index=(index+1)%capacity;
        if(index==startIndex){
            break;
        }
    }
    cout<<"Key not found\n";
}

void HashTableLinearProbing::displayHash()
{
    for(int i=0;i<capacity;i++){
        if(table[i]==-1)
            cout<<i<<" : Empty\n";
        else if(table[i]==-2)
            cout<<i<<" : Deleted!!!\n";
        else
            cout<<i<<":"<<table[i]<<endl;
    }
}

class HashTableUnorderedMap{
private:
    unordered_map<int, int> table;
public:
    void insertItem(int key){
        table[key]=key;
    }
    void deleteItem(int key){
        table.erase(key);
    }
    void displayHash(){
        for(auto it : table)
        {
            cout<<it.first<<"-->"<<it.second<<endl;
        }
    }
};

int main()
{
    //Seperate Chaining
    HashTableChaining htChaining(7);
    htChaining.InsertItem(4);
    htChaining.InsertItem(25);
    htChaining.InsertItem(15);
    htChaining.InsertItem(10);
    htChaining.InsertItem(32);
    cout<<"Hash Table Using Seperate Chaining:"<<endl;
    htChaining.displayHash();
    htChaining.deleteItem(15);
    cout<<"After Deleting 15 in Hash Table: "<<endl;
    htChaining.displayHash();

    //Linear Probing
    HashTableLinearProbing htlinear(10);
    htlinear.insertItem(10);
    htlinear.insertItem(18);
    htlinear.insertItem(22);
    htlinear.insertItem(30);
    htlinear.insertItem(5);
    cout << "\nHash Table using Linear Probing:\n";
    htlinear.displayHash();
    htlinear.deleteItem(22);
    cout << "\nAfter deleting 22:\n";
    htlinear.displayHash();

    //C++ Standard Library
    HashTableUnorderedMap htmap;
    htmap.insertItem(19);
    htmap.insertItem(10);
    htmap.insertItem(23);
    htmap.insertItem(6);
    htmap.insertItem(12);
    cout << "\nHash Table using C++ Standard Library (unordered_map):\n";
    htmap.displayHash();
    htmap.deleteItem(6);
    cout << "\nAfter deleting 6 from hash_table_unordered_map:\n";
    htmap.displayHash();
}