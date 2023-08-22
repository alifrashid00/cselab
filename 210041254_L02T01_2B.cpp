#include<iostream>

using namespace std;


class counter{
private :
    int count=0;
    int increment_step=0;
public:
    void setIncrementStep(int step_val){
        increment_step=increment_step+step_val;

    }
    int get_count(){
        return count;
    }
    void increment(){
        count =count+increment_step;
    }
    bool isEven(int x){
        if(x%2==0)return true;
        else return false;
    }
    void resetCount(){
        count =0;
    }
};

int main(){
    counter c;
    c.setIncrementStep(500);
    c.increment();
    cout<<c.get_count();

}
