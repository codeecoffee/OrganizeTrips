#include<iostream>
#include<cctype> 
#include<cstring>



struct data
{
    char* segment;
    char* transport;
    char* start;
};


struct q_node
{
    q_node* next;
    data* info;
};


class Tripq
{
    public:
        Tripq();
        ~Tripq();
        int add(data* viagem);
        bool displaylast();

    private:
        int enqueue(q_node*& rear, data* viagem);
        //int peek();
        bool displaylast(q_node* rear);
        void copy(q_node*& temp, data* viagem);
        void keepinfo(data*& keep, q_node* rear);

        q_node* rear;// rear of the queue -add here

};


