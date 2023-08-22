#include<iostream>


using namespace std;

class student{
private:
    string first_name;
    string last_name;
    int stuID;
    float grade;
    string course;
    float obmarks;
    int age;

public:
    void setDetails(string f,string l,int stuID,float mark,string c,int ag){
        first_name=f;
        last_name=l;
        stuID=stuID;
        obmarks=mark;
        course =c;
        age = 2023-ag;
        if(obmarks>80)grade =4.00;
        else if(obmarks>70)grade=3.00;
        else if(obmarks>60)grade = 2.50;
        else grade =0.00;


    }
    int disAge(){
        return age;

    }
    float disGPA(){
        return grade;
    }
    void willGrad(float x){
        if(x>=2.50)cout<<"Yes"<<endl;
        if(x<2.50)cout<<"No"<<endl;



    }
    float upgpa(int x){
        obmarks= obmarks+obmarks*.1;
        if(obmarks>80)grade =4.00;
        else if(obmarks>70)grade =3.00;
        else if(obmarks>60)grade= 2.50;
        else grade =0.00;

    }
    void printTranscrip(){
        cout<<first_name<<" " <<last_name<<endl;
        cout<<stuID<<endl;
        cout<<disAge()<<endl;
        cout<<grade<<endl;
        willGrad(grade);

    }



};


int main(){
    student s;

    s.setDetails("Alif","Rashid",254,65,"cse4043",2000);
    s.printTranscrip();


}
