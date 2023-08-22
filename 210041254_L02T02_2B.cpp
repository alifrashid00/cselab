#include<iostream>

using namespace std;


class book{

private:
    string title;
    string author;
    int year;
    bool available;
public:
    void setDetails(string s,string a,int y){
        title = s;
        author = a;
        year =y;
    }
    void checkOut(){
        available=false;
    }
    void checkIn(){
        available= true;
    }
    bool isClassic(int x){
        if(x>50)return true;
        else return false;
    }
    void disStatus(){
        cout<<title<<endl;
        cout<<author<<endl;
        cout<<year<<endl;
        if(available==true)cout<<"Available"<<endl;
        else cout<< "Unavailable"<<endl;
    }
};



int main(){
    book b;
    b.setDetails("ABC","ALif",60);
    b.disStatus();


}
