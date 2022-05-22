#include<iostream>

struct Person{
    char label;
    int height;
    char name[5];
    short weight;
};


int main(){

        Person p;
        p.label='A';
        p.height=180;
        p.name[0]='l';
        p.name[1]='i';
        p.name[2]='u';
        p.name[3]='\0';
        p.weight=80;

        std::cout<<sizeof(Person)<<std::cout<<std::endl;

        return 0;
}
