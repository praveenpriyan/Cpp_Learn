class Person{
protected:
    string name;
    int age;
public:    
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Professor:public Person
{
    int publications;
    int cur_id;
    static int idCounter;
public:
    Professor(){
        cur_id=++idCounter;
    }
    void getdata()override{
        cin>>name>>age>>publications;
    }
    void putdata()override{
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
    }
};
int Professor::idCounter=0;
class Student:public Person{
private:
    int marks[6];
    int cur_id;
    static int idCounter;
public:
    Student(){
        cur_id=++idCounter;
    }
    void getdata()override{
        cin>>name>>age;
        for(int i=0;i<6;i++)
            cin>>marks[i];
    }
    void putdata()override{
        int sum=0;
        for(int i=0;i<6;i++)
            sum+=marks[i];
        
        cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<endl;
    }
};
int Student::idCounter=0;